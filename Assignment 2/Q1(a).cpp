#include<iostream>
using namespace std;

int main() {
	
	int val1=0, val2=0, val3=0, sum=0, max_sum=0;
	const int size=10;
	int list[size]={6,-1,7,3,-6,9,8,-5,4,19};
	
	for (int i=0; i<10; i++) {
		for (int j=i; j<8; j++) {
			sum = list[j]+list[j+1]+list[j+2];
			if (max_sum<sum) {
				max_sum=sum;
				val1=list[j];
				val2=list[j+1];
				val3=list[j+2];
			}
		}
	}
	
	cout<<"Max triplet: "<<max_sum<<endl;
	cout<<"Triplet Values:"<<val1<<" "<<val2<<" "<<val3;
	
	return 0;
}
