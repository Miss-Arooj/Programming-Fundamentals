#include <iostream>
using namespace std;
int main()
{
int num,sum=0;
cout<<"Enter a number: ";
cin>>num;

while(num>0){
	sum +=num;
	cout<<"Enter a number: ";
	cin>>num;
}
cout<<"The sum is"<<" "<<sum;

return 0;	
}
