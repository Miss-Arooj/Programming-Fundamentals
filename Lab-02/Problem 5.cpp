#include<iostream>
using namespace std;
int main()
{
	int n,i=2;
	cout<<"Enter a number: ";
	cin>>n;
while(i<n){
    if(n%i==0){
    cout<<"Number is not Prime";
	break;}
i++;
}
if(i==n)
cout<<"Number is Prime";
return 0;
}
