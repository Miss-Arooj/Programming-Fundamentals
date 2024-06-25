#include<iostream>
using namespace std;
int main()
{
	float a=0,b=0,ans=0;
	char ch='+';

	cout<<"Enter Number1: ";
	cin>>a;
	cout<<"Enter Number2: ";
	cin>>b;
	cout<<"Enter Operator: ";
	cin>>ch;

	if (ch=='+'){
		ans=a+b;
		cout<<a<<" + "<<b<<" = "<<ans;
}

	else if(ch=='-'){
		ans=a-b;
		cout<<a<<" - "<<b<<" = "<<ans;
}

	else if(ch=='*'){
		ans=a*b;
		cout<<a<<" * "<<b<<" = "<<ans;
}

	else{
		ans=a/b;
		cout<<a<<" / "<<b<<" = "<<ans;
}

	return 0;	
}
