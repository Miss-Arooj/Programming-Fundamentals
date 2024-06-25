#include<iostream>
using namespace std;
int main()
{
	int n,s=0,c=0,f=0;
	cout<<"Enter a positive integer: ";
	cin>>n;
if(n<0)
cout<<"Invalid number";
if(n==0)
f=1;
else
{
	f=n;
	s=n;
	while(s>c && n>1){
		f=f*(n-1);
		n=n-1;
		c=c+1;
	}
}
cout<<f;
return 0;	
}
