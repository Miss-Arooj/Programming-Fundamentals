#include<iostream>
using namespace std;
int main(){
	int i,n,sign=-1;
	float sum=0;
	cout<<"Enter values of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		
		sign *=-1;
		sum += sign*1.0/i;
	}
	cout<<"sum:"<<sum;
}
