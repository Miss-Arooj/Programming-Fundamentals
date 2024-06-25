#include<iostream>
using namespace std;
int main(){
int h;
cout<<"Enter a number:";
cin>>h;
for(int i=1;i<=h;i++){
	for(int j=1;j<=h;j++){
		cout<<" ";
		if(i==1||j==1||i==h||j==h){
			cout<<"*";
		}
		else{
		cout<<" ";}
	}
	cout<<endl;
}	
return 0;
}
