#include<iostream>
#include<fstream>
#include "mygraphics.h"
#include "myconsole.h"
using namespace std;

struct coordinates
{
    int color = 150;
    int x_1;
    int y_1;
    int x_2;
    int y_2;
    bool out = false;
    bool collide = false;
};

void invaders(int alien_x, int alien_y, coordinates alien[5][10]) {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {

            myEllipse(alien_x, alien_y, alien_x + 50, alien_y + 20, RGB(alien[i][j].color, alien[i][j].color, alien[i][j].color), RGB(alien[i][j].color, alien[i][j].color, alien[i][j].color));
            alien_x = alien_x + 70;


        }
        alien_x = 150;
        alien_y = alien_y + 70;//70
    }
}

// Store the position of invaders in variables
void invader_pos(int alien_x, int alien_y, coordinates array[5][10]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j].x_1 = alien_x;
            array[i][j].y_1 = alien_y;
            array[i][j].x_2 = alien_x + 50;
            array[i][j].y_2 = alien_y + 20;
            alien_x = alien_x + 70;

        }
        alien_x = 150;
        alien_y = alien_y + 70;//70
    }
}

void lives(int chance) {
    if (chance == 3)
    {
        myRect(480, 10, 480 + 30, 40, RGB(0, 255, 0), RGB(0, 255, 0));   // Green Rectangles To Represent Lives.
        myRect(520, 10, 520 + 30, 40, RGB(0, 255, 0), RGB(0, 255, 0));
        myRect(560, 10, 560 + 30, 40, RGB(0, 255, 0), RGB(0, 255, 0));

    }
    else if (chance == 2)
    {
        myRect(480, 0, 480 + 30, 30, RGB(0, 255, 0), RGB(0, 255, 0));
        myRect(520, 0, 520 + 30, 30, RGB(0, 255, 0), RGB(0, 255, 0));
        
        // Cleaning First Life.
    }
    else if (chance == 1)
    {
        myRect(480, 0, 480 + 30, 30, RGB(0, 255, 0), RGB(0, 255, 0));

        // Cleaning Second Life.
    }
}

int main()
{

    int win_x, win_y;
    int alien_x, alien_y;
    int ship_x, ship_y;
    coordinates alien[5][10];
    bool flag = true;
    int l = 3;
    char game[] = "GAME";
    int bullet_x;
    int bullet_y;
    coordinates bullet;
    coordinates ship;
    bool paused = true;
    char Wel_Msg[30] = "\t\t\t\WELCOME TO SPACE INVADERS!";
    char G_M[30] = "\t\t\t\GROUP MEMBERS: ";
    char M_1[30] = "\t\t\t\FATIMA USMAN";
    char M_2[30] = "\t\t\t\AROOJ";
    char WISH[30] = "\t\t\t\BEST OF LUCK!";
    char C_1[30] = "PRESS ENTER FOR NEW GAME";
    char C_2[30] = "PRESS C FOR SAVE GAME";
    char pausedgame[30] = "Paused: Press P to resume";
    char Save_Game[30] = "Press S to Save";
    char end[30] = "Game Over";
    bool pause = true;
    bool start = false;
    char lose[30] = "YOU LOSE!";
    char End_W[30] = "BETTER LUCK NEXT TIME..";
    char won[30] = "YOU WON!";
    char Won_W[30] = "WELL PLAYED";

    GetWindowDimensions(win_x, win_y);

    SetWindowTitle(game);
    ship_x = win_x / 2;
    ship_y = win_y - 5; // for ship position
    alien_x = 150;
    alien_y = 70;
    int score = 0;
    int high = 0;

    // To read highscore values from file.
    int a, b, c, d, e;
    ifstream file("highscore.txt");
    file >> a >> b >> c >> d >> e;
    int high1 = a;
    int high2 = b;
    int high3 = c;
    int high4 = d;
    int high5 = e;

     //WELCOME MESSAGE  
    myDrawTextWithFont(win_x - 850, 90, 50, G_M, RGB(0, 255, 0), RGB(0, 0, 255));
    myDrawTextWithFont(win_x - 550, 180, 50, M_1, RGB(0, 255, 0), RGB(0, 0, 255));
    myDrawTextWithFont(win_x - 550, 260, 50, M_2, RGB(0, 255, 0), RGB(0, 0, 255));
    Sleep(3000);
    ClearScreen();
    myDrawTextWithFont(win_x - 730, 200, 50, Wel_Msg, RGB(0, 255, 0), RGB(0, 0, 255));
    Sleep(3000);    // Delay for 2000 milliseconds.
    ClearScreen();    // Clear Screen
    myDrawTextWithFont(win_x - 600, 200, 50, WISH, RGB(0, 255, 0), RGB(0, 0, 255));
    Sleep(4000);
    ClearScreen();

    while (start == false) {
        PlaceCursor(0, 0);
        myDrawTextWithFont(win_x - 850, 100, 50, C_1, RGB(0, 255, 0), RGB(0, 0, 255));
        myDrawTextWithFont(win_x - 850, 200, 50, C_2, RGB(0, 255, 0), RGB(0, 0, 255));

        int n = CheckKeyPressed();
        if (n == 13) {
            start = true;
            break;
        }
        else if (n == 67) {
            ifstream ishipx("ship_x.txt");
            ishipx >> ship_x;
            ifstream ishipy("ship_y.txt");
            ishipy >> ship_y;
            ifstream ialieny("alien_y.txt");
            ialieny >> alien_y;
            ifstream iscore("score.txt");
            iscore >> score;
            ifstream ilives("lives.txt");
            ilives >> l;
            ifstream iColors("Colors.txt", ios::in);
            for (int a = 0; a < 5; a++) {
                for (int b = 0; b < 10; b++) {
                    iColors >> alien[a][b].color;
                    iColors >> alien[a][b].collide;
                }
            }
            start = true;
            break;
        }
    }

    while (flag) {

        //alien  MOVEMENT`
        bool hit = false;
        bool collide = false;
        invader_pos(alien_x, alien_y, alien);
        lives(l);
        myLine(0, 50, 0 + win_x, 50, RGB(0, 255, 0));

        //MOVE SHIP WITH LEFT AND RIGHT ARROW KEYS. PRESS SPACE TO CHANGE TEXT
        if (score < 500) {
            win_y = 170;
            if (alien_y <= win_y) {
                if (pause) {
                    if (l > 0) {
                        alien_y++;
                        int k = CheckKeyPressed();
                        if (ship_x >= 0) {
                            if (k == LEFTKEY) {
                                myRect(ship_x, ship_y, ship_x + 70, ship_y - 20, RGB(0, 0, 0), RGB(0, 0, 0));
                                ship_x = ship_x - 50;
                            }
                        }
                        if (ship_x < win_x) {
                            if (k == RIGHTKEY) {

                                myRect(ship_x, ship_y, ship_x + 70, ship_y - 20, RGB(0, 0, 0), RGB(0, 0, 0));
                                ship_x = ship_x + 50;
                            }
                        }
                        if (ship_y >= 0) {
                            if (k == UPKEY) {

                                myRect(ship_x, ship_y, ship_x + 70, ship_y - 20, RGB(0, 0, 0), RGB(0, 0, 0));
                                ship_y = ship_y - 50;
                            }
                        }
                        if (k == DOWNKEY) {
                            myRect(ship_x, ship_y, ship_x + 70, ship_y - 20, RGB(0, 0, 0), RGB(0, 0, 0));
                            ship_y = ship_y + 50;
                        }

                        if (k == PKEY)
                            pause = false;

                        if (k == SPACEKEY) {
                            int y = ship_y - 50;
                            while (y > 0) {

                                myLine(ship_x + 35, y, ship_x + 35, y - 10, RGB(255, 255, 0));
                                bullet.y_1 = y;
                                bullet.y_2 = y - 10;
                                bullet.x_1 = ship_x + 35;
                                bullet.x_2 = ship_x + 35;
                                for (int i = 0; i < 5; i++) {
                                    for (int j = 0; j < 10; j++)
                                    {
                                        if (bullet.y_1 <= alien[i][j].y_2 && bullet.y_2 >= alien[i][j].y_1 && bullet.x_1 >= alien[i][j].x_1 && bullet.x_2 <= alien[i][j].x_2 && alien[i][j].out == false) {
                                            score = score + 10;
                                            if (high < score)
                                                high = score;
                                            alien[i][j].color = 0;
                                            hit = true;
                                            alien[i][j].out = true;
                                            Beep(100, 400);

                                        }
                                    }
                                }
                                if (hit) {
                                    break;
                                }
                                y = y - 15;

                                ClearScreen();
                                myRect(ship_x, ship_y, ship_x + 50, ship_y + 50, RGB(0, 0, 0), RGB(0, 0, 0));
                                invaders(alien_x, alien_y, alien);
                                lives(l);


                            }
                        }
                        for (int i = 0; i < 5; i++) {
                            for (int j = 0; j < 10; j++) {
                                if ((ship_y <= alien[i][j].y_2 || ship_y + 50 <= alien[i][j].y_2) && (ship_y >= alien[i][j].y_1 || ship_y + 50 >= alien[i][j].y_1) && (ship_x >= alien[i][j].x_1 || ship_x + 50 >= alien[i][j].x_1) && (ship_x <= alien[i][j].x_2 || ship_x + 50 <= alien[i][j].x_2) && alien[i][j].out == false && alien[i][j].collide == false) {
                                    l--;
                                    alien[i][j].collide = true;
                                    alien[i][j].out = true;
                                    alien[i][j].color = 0;
                                    break;
                                }
                            }
                        }
                    }
                    else if (l >= 0) {
                        ClearScreen();
                        myDrawTextWithFont(win_x - 600, 100, 60, end, RGB(0, 255, 0), RGB(0, 0, 255));
                        myDrawTextWithFont(win_x - 575, 175, 50, lose, RGB(0, 255, 0), RGB(0, 0, 255));
                        myDrawTextWithFont(win_x - 675, 240, 50, End_W, RGB(0, 255, 0), RGB(0, 0, 255));
                        break;
                        //myDrawTextWithFont(win_x - 575, 250, 40, highscores, RGB(0, 255, 0), RGB(0, 0, 255));
                    }
                }

                else if (!pause) {
                    myDrawTextWithFont(win_x - 675, 200, 50, pausedgame, RGB(0, 255, 0), RGB(0, 0, 255));
                    myDrawTextWithFont(win_x - 675, 280, 50, Save_Game, RGB(0, 255, 0), RGB(0, 0, 255));
                    int p = CheckKeyPressed();
                    if (p == PKEY) {

                        pause = true;
                    }
                    else if (p == 115 || p == 83) {
                        ofstream oshipx("ship_x.txt");
                        oshipx << ship_x;
                        ofstream oshipy("ship_y.txt");
                        oshipy << ship_y;
                        //ofstream oboxx("box_x.txt");
                        //oboxx << box_x;
                        ofstream oalieny("alien_y.txt");
                        oalieny << alien_y;
                        ofstream oscore("score.txt");
                        oscore << score;
                        ofstream olives("lives.txt");
                        olives << l;
                        ofstream oColours("Colors.txt", ios::out);
                        for (int a = 0; a < 5; a++) {
                            for (int b = 0; b < 10; b++) {
                                oColours << alien[a][b].color << " ";
                                oColours << alien[a][b].out << " ";
                            }
                        }
                       
                    }
                }

            }
            else if (alien_y > win_y) {
                ClearScreen();
                myDrawTextWithFont(win_x - 600, 100, 60, end, RGB(0, 255, 0), RGB(0, 0, 255));
                myDrawTextWithFont(win_x - 575, 175, 50, lose, RGB(0, 255, 0), RGB(0, 0, 255));
                myDrawTextWithFont(win_x - 675, 240, 50, End_W, RGB(0, 255, 0), RGB(0, 0, 255));
                //myDrawTextWithFont(win_x - 575, 250, 40, highscores, RGB(0, 255, 0), RGB(0, 0, 255));
                break;
            }
        }
        else if (score == 500) {
            ClearScreen();
            myDrawTextWithFont(win_x - 600, 100, 60, won, RGB(0, 255, 0), RGB(0, 0, 255));
            myDrawTextWithFont(win_x - 630, 200, 60, Won_W, RGB(0, 255, 0), RGB(0, 0, 255));
            break;
        }

        //CLEAR PREVIOUS FRAME
        ClearScreen();

        lives(l);
        myRect(ship_x, ship_y, ship_x + 70, ship_y - 20, RGB(200, 0, 100), RGB(200, 0, 100));
        invaders(alien_x, alien_y, alien);
        PlaceCursor(0, 0);
        std::cout << "score: " << score;

        // To store highscores.
        ofstream highest("highscore.txt");

        if (high > high1) {
            //swap(high, high1);
            //high1 = high;
            highest << high << endl;
            highest << high1 << endl;
            highest << high2 << endl;
            highest << high3 << endl;
            highest << high4 << endl;

        }
        else if (high > high2) {
            highest << high1 << endl;
            highest << high << endl;
            highest << high2 << endl;
            highest << high3 << endl;
            highest << high4 << endl;
        }
        else if (high > high3) {
            highest << high1 << endl;
            highest << high2 << endl;
            highest << high << endl;
            highest << high3 << endl;
            highest << high4 << endl;
        }
        else if (high > high4) {
            highest << high1 << endl;
            highest << high2 << endl;
            highest << high3 << endl;
            highest << high << endl;
            highest << high4 << endl;
        }
        else if (high > high5) {
            highest << high1 << endl;
            highest << high2 << endl;
            highest << high3 << endl;
            highest << high4 << endl;
            highest << high << endl;
        }
        else {
            highest << high1 << endl;
            highest << high2 << endl;
            highest << high3 << endl;
            highest << high4 << endl;
            highest << high5 << endl;
        }

        PlaceCursor(50, 0);
        std::cout << "High Scores: ";
        std::cout << high1 << " ";
        std::cout << high2 << " ";
        std::cout << high3 << " ";
        std::cout << high4 << " ";
        std::cout << high5 << " ";
    }
    ifstream rscore("highscore.txt");
    rscore >> high1;
    rscore >> high2;
    rscore >> high3;
    rscore >> high4;
    rscore >> high5;

    return 0;
}