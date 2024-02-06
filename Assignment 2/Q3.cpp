#include <iostream>
#include<cstring>
using namespace std;

void Direction0(char grid[][10], char Word[]) {
	int a = 0, match = 0;
		for (int j = 0; j < 10; j++) {
			for (int i = 0; i < 10; i++) {
				if (grid[i][j] == Word[0]) {
					if (i - (strlen(Word) - 1) >= 0) {
						a = i;
						match = 0;
						for (int k = 0; k < strlen(Word); k++) {

							if (grid[a][j] == Word[k]) {
								a--;
								match++;
							}
							if (match == strlen(Word)) {
								cout << Word << " Found at: (" << i << "," << j << ")" << " Direction 0"<<endl;
							}
						}
					}
				}
			}
		}
}

void Direction1(char grid[][10], char Word[]) {
		int a = 0, b = 0, match = 0;
		for (int j = 0; j < 10; j++) {
			for (int i = 0; i < 10; i++) {
				if (grid[i][j] == Word[0]) {
					if (j - (strlen(Word) - 1) >= 0) {
						a = i;
						b = j;
						match = 0;
						for (int k = 0; k < strlen(Word); k++) {

							if (grid[a][b] == Word[k]) {
								a--;
								b++;
								match++;
							}
							if (match == strlen(Word)) {
								cout << Word << " Found at: (" << i << "," << j << ")" << " Direction 1" << endl;
							}
						}
					}
				}
			}
		}
}

void Direction2(char grid[][10], char Word[]) {
	int a = 0, match = 0;
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (grid[i][j] == Word[0]) {
					a = j;
					match = 0;
					for (int k = 0; k < strlen(Word); k++) {
						if (grid[i][a] == Word[k]) {
							a++;
							match++;
					}
					if (match == strlen(Word)) {
						cout << Word << " Found at: (" << i << "," << j << ")" << " Direction 2" << endl;
					}
				}
			}
		}
	}
}

void Direction3(char grid[][10], char Word[]) {
	int a = 0, b = 0, match = 0;
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (grid[i][j] == Word[0]) {
				if (j - (strlen(Word) - 1) >= 0) {
					a = i;
					b = j;
					match = 0;
					for (int k = 0; k < strlen(Word); k++) {

						if (grid[a][b] == Word[k]) {
							a++;
							b++;
							match++;
						}
						if (match == strlen(Word)) {
							cout << Word << " Found at: (" << i << "," << j << ")" << " Direction 3" << endl;
						}
					}
				}
			}
		}
	}
}

void Direction4(char grid[][10], char Word[]) {
	int a = 0, match = 0;
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (grid[i][j] == Word[0]) {
					a = i;
					match = 0;
					for (int k = 0; k < strlen(Word); k++) {

						if (grid[a][j] == Word[k]) {
							a++;
							match++;
						}
						if (match == strlen(Word)) {
							cout << Word << " Found at: (" << i << "," << j << ")" << " Direction 4" << endl;
						}
					}
			
			}
		}
	}
}

void Direction5(char grid[][10], char Word[]) {
	int a = 0, b = 0, match = 0;
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (grid[i][j] == Word[0]) {
				if (j - (strlen(Word) - 1) >= 0) {
					a = i;
					b = j;
					match = 0;
					for (int k = 0; k < strlen(Word); k++) {

						if (grid[a][b] == Word[k]) {
							a++;
							b--;
							match++;
						}
						if (match == strlen(Word)) {
							cout << Word << " Found at: (" << i << "," << j << ")" << " Direction 5" << endl;
						}
					}
				}
			}
		}
	}
}

void Direction6(char grid[][10], char Word[]) {
	int a = 0, match = 0;
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (grid[i][j] == Word[0]) {
				a = j;
				match = 0;
				for (int k = 0; k < strlen(Word); k++) {
					if (grid[i][a] == Word[k]) {
						a--;
						match++;
					}
					if (match == strlen(Word)) {
						cout << Word << " Found at: (" << i << "," << j << ")" << " Direction 6" << endl;
					}
				}
			}
		}
	}
}

void Direction7(char grid[][10], char Word[]){
	int a = 0, b = 0, match = 0;
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (grid[i][j] == Word[0]) {
				if (j - (strlen(Word) - 1) >= 0) {
					a = i;
					b = j;
					match = 0;
					for (int k = 0; k < strlen(Word); k++) {

						if (grid[a][b] == Word[k]) {
							a--;
							b--;
							match++;
						}
						if (match == strlen(Word)) {
							cout << Word << " Found at: (" << i << "," << j << ")" << " Direction 7" << endl;
						}
					}
				}
			}
		}
	}
}

void Find(char grid[][10], char FindWord[]) {
	Direction0(grid, FindWord);
	Direction1(grid, FindWord);
	Direction2(grid, FindWord);
	Direction3(grid, FindWord);
	Direction4(grid, FindWord);
	Direction5(grid, FindWord);
	Direction6(grid, FindWord);
	Direction7(grid, FindWord);
}

int main(){
	
	char grid[10][10] = {
						{ 'T', 'N', 'E', 'M', 'N', 'G', 'I', 'S', 'S', 'A'},
						{ 'B', 'N', 'C', 'A', 'O', 'M', 'P', 'J', 'W', 'R'},
						{ 'C', 'L', 'A', 'R', 'I', 'F', 'Y', 'H', 'X', 'R'},
						{ 'L', 'O', 'S', 'C', 'T', 'G', 'H', 'C', 'E', 'V'},
						{ 'A', 'N', 'M', 'H', 'S', 'Y', 'S', 'T', 'E', 'M'},
						{ 'S', 'T', 'I', 'P', 'E', 'Q', 'N', 'A', 'F', 'E'},
						{ 'S', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 'M'},
						{ 'U', 'E', 'F', 'N', 'Q', 'T', 'G', 'Q', 'W', 'O'},
						{ 'D', 'K', 'R', 'O', 'W', 'T', 'E', 'N', 'K', 'R'},
						{ 'A', 'O', 'M', 'O', 'D', 'N', 'A', 'R', 'T', 'Y'},
	};
	
	cout<<"    0 1 2 3 4 5 6 7 8 9"<<endl;
	cout<<"  ---------------------"<<endl;
	cout<<"0 | T N E M N G I S S A"<<endl;
	cout<<"1 | B N C A O M P J W R"<<endl;
	cout<<"2 | C L A R I F Y H X R"<<endl;
	cout<<"3 | L O S C T G H C E V"<<endl;
	cout<<"4 | A N M H S Y S T E M"<<endl;
	cout<<"5 | S T I P E Q N A F E"<<endl;
	cout<<"6 | S S E Q U E N C E M"<<endl;
	cout<<"7 | U E F N Q T G Q W O"<<endl;
	cout<<"8 | D K R O W T E N K R"<<endl;
	cout<<"9 | A O M O D N A R T Y"<<endl;
		   
	char words[15][11] = {
							"COMPUTER",
						    "QUESTION",
							"CLARIFY",
							"NETWORK",
							"SYSTEM",
							"CLASS",
							"SEQUENCE",
							"CATCH",
							"MEMORY",
							"RANDOM",
						    "ASSIGNMENT",
							"MARCH",
							"SCANT",
							"SPEED",
							"ENTER"
	};
	
	cout<<endl;
	for (int i = 0; i < 15; i++) {
		Find(grid, words[i]);
	}
	
	return 0;
}
