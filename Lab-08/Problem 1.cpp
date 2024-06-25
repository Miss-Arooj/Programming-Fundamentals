#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter size:";
  cin>>num;
     for(int i=1;i<=num;i++){
		 for(int j=i;j<num-1;j++){
			 cout<<" ";
		}
			 for(int z=1;z<=i;z++){
				 cout<<z;
			}
				 int m=i;
				 for(int k=1;k<i;k++){
					 cout<<--m;
					 m=m;
			 }
			 cout<<endl;
		}
return 0;
}
