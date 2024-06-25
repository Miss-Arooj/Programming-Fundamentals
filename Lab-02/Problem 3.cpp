#include<iostream>
using namespace std;
int main()
{
int n=0,count=10,square;
cout<<"Enter a number: ";
cin>>n;
count = count + n;

while(n<count){
	square=n*n;
	n++;
	cout<<square<<endl;
}
return 0;
}
