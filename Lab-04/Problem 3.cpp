#include <iostream>
using namespace std;
int main(){

int num,count=1,x;
cout<<"Enter number of terms:";
cin>>num;
for(int i=1;i<=num;i++){
	if(i%2==0){
		cout<<5*count;
		count++;
		if(i==num){
			break;
		}
		cout<<"+";
	}
	else{
		cout<<2*x;
		x++;
		if(i==num){
			break;
		}
		cout<<"-";
	}
}

return 0;
}


