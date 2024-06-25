#include<iostream>
using namespace std;
int main ()
{
int arr[5],n=5,max,min;
  for (int i=0;i<n;i++)
  cin>>arr[i];
  max=arr[0];
     for(int i=0;i<n;i++){
        if(max<arr[i])
            max=arr[i];
     }
     min=arr[0];
            for(int i=0;i<n;i++){
                if(min>arr[i])
                min=arr[i];
            }
    cout<<"Largest number:"<<max<<endl;
    cout<<"Smallest number:"<<min;
    return 0;
}

