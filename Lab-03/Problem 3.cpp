#include<iostream>
using namespace std;
int main(){
int n,sum=0,avg=0,j;
cout<<"Enter number: ";
cin>>n;
for(int i=1;i<=n;i++){
	j=i*i;
	cout<<j<<endl;
	sum=sum+j;
}
avg= sum/n;
cout<<"average: "<<avg;
return 0;
}
