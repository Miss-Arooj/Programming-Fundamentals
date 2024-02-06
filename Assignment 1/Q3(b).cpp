#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter n: ";
	cin>>num;
	int rev=0,numorg=num;
	while(num>0){
		rev=(rev*10)+(num%10);
		num=num/10;
	}
	if(rev==numorg){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not Palindrome";
	}
return 0;	
}
