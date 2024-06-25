#include<iostream>
using namespace std;
int main()
{
int n,i,sum=0;
cout<<"Enter number:"<<" "; 
cin>>n;
for(i=1;i<=n;i=i+2){
cout<<i<<endl;
sum=sum+i;
}
cout<<"sum:"<<" "<<sum;
return 0;
}
