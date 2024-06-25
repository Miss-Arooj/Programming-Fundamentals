#include<iostream>
#include<string>
using namespace std;

int main(){


	string S1, S2, S3;
	cout << "s1: ";
	cin >> S1;
	cout << "s2: ";
	cin >> S2;
	cout << endl << "Before swapping" << endl << "s1: " << S1 << endl << "s2: " << S2 << endl;
	S3 = S1;
	S1 = S2;
	S2 = S3;
	cout <<endl<< "After swapping" << endl << "s1: " << S1 << endl << "s2: " << S2 << endl;
	
	return 0;
}
