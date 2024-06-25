#include<iostream>
using namespace std;
int main(){
	
int n,n1,n2,total;
n1=1;
n2=1;
total=0;
cout<<"Enter number of terms:";
cin>>n;
for (int i=1; i<=n; i=i+1){
	if(i==1){
		cout<<n1<<",";
		continue;
	}
	if(i==2){
		cout<<n2<<",";
		continue;
	}
	total=n1+n2;
	n1=n2;
	n2=total;
	cout<<total<<",";
}
	return 0;
}

