#include<iostream>
using namespace std;
int linear_search(int a[], int size, int value) {
	for (int i = 0;i < size;i++) {
		if (a[i] == value) {
			return i;
		}
	}
	return -1;
}
int main() {
	int arr[8] = { 9,55,60,81,49,66,49,10 };
	for (int j = 0;j < 8;j++) {
		cout << arr[j]<<" ";
	}
	int n;
	cout <<endl<< "Enter any number to find: ";
	cin >> n;
	cout <<n<<" is found at index "<< linear_search(arr, 8, n)<<" in the array.";
	return 0;
}