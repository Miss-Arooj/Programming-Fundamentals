#include<iostream>
using namespace std;
int main()
{
	int x1,y1,m,x2,y2,c,y,x;
	cout<<"Enter 1st coordinates:"<<endl;
	cin>>x1>>y1;
	cout<<"Enter 2nd coordinates:"<<endl;
	cin>>x2>>y2;
	m=(y2-y1)/(x2-x1);
	c=y1-(m*x1);
	cout<<"Approximate Linear Equation:"<<"y = "<<m<<"x + "<<c<<endl;
	for(int i=7;-7<=i;i--){
		x=i;
		y=m*x+c;
		for(int j=8;-8<=j;j--){
			if(j==-((m*i)+c))
			cout<<"X";
			else if (i==0 && j==0)
			cout<<"+";
			else if(i==0)
			cout<<"-";
			else if(j==0)
			cout<<"|";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
