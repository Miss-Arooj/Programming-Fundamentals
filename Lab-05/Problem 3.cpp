#include<iostream>
using namespace std;
int main(){
int h;
cout<<"Enter a number:";
cin>>h;
for(int i=1;i<=h;i++){
	for(int j=h-i;j>0;j--){
		cout<<" ";
	}
	for(int k=1;k<=i;k++){
		cout<<"*";
	}
	cout<<endl;
}	
return 0;
}
