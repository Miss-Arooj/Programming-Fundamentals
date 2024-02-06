#include <iostream>
using namespace std;

int main()
{
	float x,sum,no_row;
	int i,n;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter number of terms to evaluate: ";
	cin>>n;
	sum =1; no_row = 1;
	for (i=1;i<n;i++)
	{
	  no_row = no_row*x/(float)i;
	  sum =sum+ no_row;
	}
	cout<<"e^"<<x<<" to "<<n<<" terms = "<<sum;
} 

