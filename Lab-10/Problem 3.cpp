#include<iostream>
using namespace std;
struct menu {
    string name;
    string price;
}m[15];
int main() {
    cout << "..........Welcome To Fast Cafe.........." << endl;
    cout << "Today's Menu" << endl;
    m[0].name = "Hot Choclate";m[0].price = "$25.0";
    m[1].name = "Hot Choclate";m[1].price = "$25.0";
    m[2].name = "Hot Choclate";m[2].price = "$25.0";
    m[3].name = "Hot Choclate";m[3].price = "$25.0";
    m[4].name = "Hot Choclate";m[4].price = "$25.0";
    m[5].name = "Hot Choclate";m[5].price = "$25.0";
    m[6].name = "Hot Choclate";m[6].price = "$25.0";
    m[7].name = "Hot Choclate";m[7].price = "$25.0";
    m[8].name = "Hot Choclate";m[8].price = "$25.0";
    m[9].name = "Hot Choclate";m[9].price = "$25.0";
    m[10].name = "Hot Choclate";m[10].price = "$25.0";
    m[11].name = "Hot Choclate";m[11].price = "$25.0";
    m[12].name = "Hot Choclate";m[12].price = "$25.0";
    m[13].name = "Hot Choclate";m[13].price = "$25.0";
    m[14].name = "Potato Fries";m[14].price = "$10.5";
    for (int i = 0;i <= 15;i++) {
        cout << i << ": " << m[i].name << "            " << m[i].price << endl;
    }
    system("pause>0");
}