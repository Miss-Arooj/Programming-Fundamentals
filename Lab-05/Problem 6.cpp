#include<iostream>
using namespace std;
int main(){
int n1,n2,k,j=1,l;
cout<<"Enter a number:";
cin>>n1;
cout<<"Enter number of rows:";
cin>>n2;
l=n1;
k=2*n1;
for(int r=1;r<=n2;r++){
for(int i=1;i<=k;i++){
	if(i%2==1){
		cout<<n1<<" ";
		n1--;
	}
	else{
		cout<<j<<" ";
		j++;
	}
}
cout<<endl;
n1=l;
j=1;
}
return 0;
}
