#include<iostream>
using namespace std;
int main()
{
int n,count=1;
cout<<"Enter a number: ";
cin>>n;
while(count<=10)
{
	cout<<n<<" "<<"*"<<" "<<count<<" "<<"="<<" "<<n*count<<endl;
	count= count+1;
}
return 0;	
}	
