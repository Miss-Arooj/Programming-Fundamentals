#include<iostream>
using namespace std;
void displayseries(int n, int r){
	int value=n;
	for(int i=0;i<r;i++){
		for(int j=i;j<r;j++){
			if(value%10==0){
				value=0;
			}
			cout<<value<<"*";
			value=value+1;
		}
		cout<<endl;
	}
}
int main(){
	int n=5;
	int r=6;
	displayseries(n,r);
	return 0;
}
