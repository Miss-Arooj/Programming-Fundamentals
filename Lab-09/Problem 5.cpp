#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char a[50];
	cin.get(a, 50);
	for (int i = 0;strlen(a) > i;i++) {
		if (a[i] >= 97) {
			a[i] = a[i] - 32;
		}
		else if (a[i] >= 65 && a[i] < 95) {
			a[i] = a[i] + 32;
		}
	}
	for (int i = 0;strlen(a) > i;i++) {
		cout << a[i];
	}
	return 0;
}