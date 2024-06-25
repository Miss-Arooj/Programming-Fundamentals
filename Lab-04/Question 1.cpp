#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"Enter Number:";
	cin>>num;
	for(int i=0;i<=num;++i){
		sum=sum+num;
		cout<<"Enter Number:";
		cin>>num;
		if(num==101)
			break;
	}
	cout<<sum;
	return 0;
}
