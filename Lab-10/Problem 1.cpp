#include<iostream>
#include<string>
using namespace std;
struct date
{
	int day;
	string month;
	int year;
}d1,d2;
int main()
{
	cout << "First date:";
	cin >> d1.day >> d1.month >> d1.year;
	cout << "Second date:";
	cin >> d2.day >> d2.month >> d2.year;
	if (d1.day == d2.day && d1.day == d2.day && d1.year == d2.year)
		cout << "Dates are equal";
	else
		cout << "Dates are not equal";
	return 0;
}
	