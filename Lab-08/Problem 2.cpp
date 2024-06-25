#include<iostream>
using namespace std;
void Find_Numbers(int a[], int x,int y, int z){
	for (int i=0;i<x;i++){
		for(int j=i;j<x;j++){
			if(a[i]*a[j]==z&&a[i]+a[j]==y){
				cout<<"Numbers are "<<a[i]<<","<<a[j]<<"."<<endl<<"There sum is "<<y<<" "<<"and multiple is"<<" "<<z<<".";
			}
		}
	}
}
int main()
{
	int arr[10]={1,5,6,7,8,9,4,11,12,3};
	int sum, multiple;
	cout<<"Enter sum:";
	cin>>sum;
	cout<<"Enter multiple:";
	cin>>multiple;
	Find_Numbers(arr, 10, sum, multiple);
return 0;
}
