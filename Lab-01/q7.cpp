#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Number1: ";
	cin>>a;
	cout<<"Enter Number2: ";
	cin>>b;
	cout<<"Enter Number3: ";
	cin>>c;
	if (a<b&&a<c){
		cout<<"Increasing Order: "<<a<<" ";
		if(b<c)
		cout<<b<<" "<<c;
		else
		cout<<c<<" "<<b;
	}
	else  if (b<a&&b<c){
		cout<<"Increasing Order: "<<b<<" ";
		if(c<a)
		cout<<c<<" "<<a;
		else
		cout<<a<<" "<<c;
	}
	else if (c<a&&c<b){
		 cout<<"Increasing Order: "<<c<<" ";
	     if(a<b)
	     cout<<a<<" "<<b;
	     else
	     cout<<b<<" "<<a;
	}

return 0;	    
}

