#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Enter score: ";
	cin>>score;
	if (score>=90)
	cout<<"Your Grade: A+";
	else if (score>=80 && score<=89)
	cout<<"Your Grade: A";
	else if (score>=70 && score<=79)
	cout<<"Your Grade: B";
	else if (score>=60 && score<=69)
	cout<<"Your Grade: C";
	else if (score>=50 && score<=59)
	cout<<"Your Grade: D";
	else
	cout<<"Your Grade: F";
}
