#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main() {

	ofstream MyFile("table.txt");
	for (int i = 1;i <= 10;i++)
	{
		MyFile << "2 X " << i << " =  " << 2 * i << endl;
	}

	MyFile.close();
	cout << "Completed successfully" << endl << endl;

	return 0;
}
