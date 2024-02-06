#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
void check(char words1[][21], int w, int counter, char a[]) 
{
	int match = 0;
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < counter; j++) {
			if (a[j] == words1[i][j]) {
				match++;
			}
		}
		if (match == counter) {
			cout << endl << words1[i] << " ";
		}
		match = 0;
	}
}


int main() {
	jump:
	int counter = 0;
	int c = 0;
	char words1[20][21];
	char words[20][21] = {
						"apply",
						"application",
						"bat",
						"batch",
						"battle",
						"compute",
						"computer",
						"compare",
						"device",
						"develop",
						"developer",
						"function",
						"functional",
						"fucntionality",
						"handle",
						"handler",
						"handling",
						"system",
						"systemic",
						"systole"
	};

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 21; j++) {
			words1[i][j] = words[i][j];
		}
	}
	
	char a[21];
	while (true) {
		a[c] = _getch();
		system("CLS");
		counter++;
		for (int i = 0; i < counter; i++) {
			cout << a[i] << " ";
		}
		if (a[c] == 13) {
			system("CLS");
			cout << "Enter pressed" << endl;
			goto jump;
		}
		else if (a[c] == '0') {
			break;
		}
		else {
			check(words1, 20, counter,a);
		}
		c++;
	}
	cout << endl << "program terminated" << endl;
	
	return 0;
}
