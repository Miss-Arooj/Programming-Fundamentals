#include<iostream>
using namespace std;
int main(){
int n,a,b;
cout<<"Enter a number: ";
cin>>n;
for(int i=0;i<10;i++){
	cout<< "The frequency of" <<i << "=";
	a=0;
	for(int j=n;j>0;j=j/10){
		b=j%10;
		if(b==1){
			a++;
		}
	}
	cout<< a << endl;
}
return 0;	
}
