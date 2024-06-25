#include<iostream>
using namespace std;
int checkprimenumber(int);
int main(){
	int n1,n2;
	bool flag;
	cout<<"Enter 1st positive integers: ";
	cin>> n1;
	cout<<"Enter 2nd positive integers: ";
	cin>> n2;
	if(n1>n2){
		n2=n1+n2;
		n1=n2-n1;
		n2=n2-n1;
	}
	cout<<"Prime numbers between"<<" "<< n1 << " and " << n2 << " are: ";
	for(int i=n1+1;i<n2;i++){
		flag=checkprimenumber(i);
		if(flag)
		cout<< i << " ";
	}
return 0;	
}
int checkprimenumber(int n){
	bool isprime = true;
	if(n==0|| n==1){
		isprime= false;
	}
	else{
		for(int j = 2; j<=n/2; ++j){
			if(n%j==0){
				isprime=false;
				break;
			}
		}
	}
	return isprime;
}
