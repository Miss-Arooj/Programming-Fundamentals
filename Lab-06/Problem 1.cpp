#include<iostream>
using namespace std;

int checkpalindrome(int num);
int main(){
int num, val;
cout<<"Enter a number:";
cin>>num;
val= checkpalindrome(num);
if(val==0)
cout<<num<<" is a palindrome";
else
cout<<num<<" is not a palindrome";
cout<<endl;
return 0;
}
int checkpalindrome(int n){
	int temp, rem, rev=0;
	temp=n;
	while(temp>0){
		rem=temp%10;
		rev=(rev*10)+rem;
		temp=temp/10;
	}
	if(rev==n)
	return 0;
	else
	return 1;  
}

