#include<iostream>
using namespace std;
int main(){
int h;
cout<<"Enter a number:";
cin>>h;
for(int i=1;i<=h;i++){
	for(int j=1;j<=h-i;j++){
		cout<<" ";}
		for(int j=1;j<=i;j++){
		if((j==1) || (j==i) || (i==h)){
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	cout<<endl;	
}
return 0;	
}
