#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter Number1 : ";
	cin>>n1;
	cout<<"Enter Number2 : ";
	cin>>n2;
	cout<<"Enter Number3 : ";
	cin>>n3;
	if (n1>n2){
	    if (n1>n3)
	    cout<<"Largest Number is "<<n1;
	    else
	    cout<<"Largest Number is "<<n3;
}
	else{
	    if (n2>n3)
		cout<<"Largest Number is "<<n2;
		else
		cout<<"Largest Number is "<<n3;
}

return 0;		      
}
