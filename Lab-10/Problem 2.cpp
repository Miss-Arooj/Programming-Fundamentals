#include<iostream>
#include<string>
using namespace std;
struct student { string name, rollno;float marks; }
s[2];
int main() {
	cout << "Enter information of students: " << endl;
	for (int i = 0; i < 2; i++) {
		cout << "Enter the name of the student: ";
		getline(cin, s[i].name);
		cout << "Enter the roll number of the student: ";
		getline(cin, s[i].rollno);
		cout << "Enter the marks of the student: ";
		cin >> s[i].marks;
		cout << endl;cin.ignore();
	}
	cout << "Displaying Information: " << endl;
	for (int i = 0; i < 2; i++) {
		cout << "Student Name : " << s[i].name << endl;
		cout << "Student Roll No : " << s[i].rollno << endl;
		cout << "Student Marks : " << s[i].marks << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}