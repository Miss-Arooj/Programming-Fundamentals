#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){

	ifstream infile("table.txt");
	string line;
	if (infile.is_open()){
		cout << "file open" << endl;
		while (getline(infile, line)){
			cout << line << endl;
		}
	}
	fstream OutFile("table.txt", ios::in | ios::out | ios::app);
	cout << endl;
	for (int j = 1;j <= 10;j++){
		OutFile << "3 X " << j << " =  " << 3 * j << endl;
	}

	OutFile.close();
	cout << "Table 3 is appended." << endl << endl <<"Completed successfully." << endl;
	
	return 0;
}
