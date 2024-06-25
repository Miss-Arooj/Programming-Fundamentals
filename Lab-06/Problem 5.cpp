#include<iostream>
using namespace std;
void print_sum_avg_max_min(){
	int input,sum=0,counter=0,maximum=1,minimum=1;
	while(true){
	cin>>input;
	if(maximum<input)
	maximum=input;
	else
	minimum=input;
	

	if(input<0){
	cout<<"Sum of numbers:"<<sum<<endl;
	cout<<"Average of numbers:"<<sum/counter<<endl;
	cout<<"Maximum of numbers:"<<maximum<<endl;
	cout<<"Minimum of numbers:"<<minimum;
	break;	
	}
		sum=sum+input;
	counter++;	
	}
}
int main(){
	print_sum_avg_max_min();
	return 0;
}
