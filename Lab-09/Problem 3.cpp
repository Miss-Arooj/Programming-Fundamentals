#include<iostream>
using namespace std;
int main() {
	int arr[2][5], arr1[2][5],i,j;
	for (int i = 0;i < 2;i++) {
		for (int j = 0; j < 5;j++) {
			int r = (rand() % 9) + 1;
			arr[i][j] = r;
		}
	}
	cout << "Premium bond Prize Winner: " << endl;
	for (i = 0;i < 2;i++) {
		for (j = 0;j < 5;j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Enter Your Prime Bond Number: ";
	for (i = 0;i < 2;i++) {
		for (j = 0; j < 5;j++) {
			cin >> arr1[i][j];
		}
	}
	int count = 0;
	for (i = 0;i < 2;i++) {
		for (j = 0;j < 5;j++) {
			if (arr[i][j] != arr1[i][j])
				count++;
		}
	}
	if (count == 0) {
		cout << "You win";
	}
	else
		cout << "You lost the price from " << count << " numbers";
	return 0;
}