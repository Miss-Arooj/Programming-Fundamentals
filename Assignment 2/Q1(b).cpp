#include<iostream>
using namespace std;

int main() {
	
	int sum=0, max_sum=0, n=0;
	const int size=10;
	int list[size]={6,-1,7,3,-6,9,8,-5,4,19};
	
	cout<<"Enter N: ";
	cin>>n;
	
	for (int i=0; i<11-n; i++) {
		sum=0;
		for(int j=i; j<i+n; j++){
				sum=sum+list[j];
			}
			if (max_sum<sum) {
				max_sum=sum;
			}
		}

	cout<<"Max "<<n<<"-Triplet: "<<max_sum<<endl;
	
	return 0;
}
