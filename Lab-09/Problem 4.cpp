#include <iostream>
using namespace std;
int main() {
	char ans[5][4] = {
	{'B','A','B','C'},
	{'D','B','C','C'},
	{'A','A','D','B'},
	{'A','C','A','D'},
	{'C','D','D','A'},
	};
	char a;
	int total = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "enter your answer :";
			cin >> a;
			if (a == ans[i][j]) {
				total++;
			}
		}
	}
	if (total >= 18) {
		cout << "You got an A";
	}
	else if (total >= 14) {
		cout << "You got a B";
	}
	else if (total >= 10) {
		cout << "You got a C";
	}
	else {
		cout << "Fail";
	}
	return 0;
}