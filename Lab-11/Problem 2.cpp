#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> myvector{ 1, 2, 3, 4, 5,6,7,8,9,10 };

	// using begin() and end() to print vector
	cout << "Using begin() and end() to populate values of vector" << endl;
	for (auto it = myvector.begin();it != myvector.end(); ++it)
		cout << ' ' << *it;
	cout << endl << endl;

	// using rbegin() and rend() to reverse values of vector
	cout << "Using rbegin() and rend() to reverse values of vector" << endl;
	for (auto rev = myvector.rbegin();rev != myvector.rend();++rev)
		cout << *rev << " ";

    return 0;
}