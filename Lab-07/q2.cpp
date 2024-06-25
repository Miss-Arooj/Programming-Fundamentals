#include <iostream>
using namespace std;

int count_occurrences(int arr[], int n, int x)
{
    int result = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          result++;
    return result;
}
 
int main()
{
	int num;
	cout<<"Enter size of array: ";
	cin>>num;
	int arr[num];
	for (int i=0;i<num;i++){
    cin>>arr[i];} 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "A[]: ";
    for (int i=0; i < n; i++) 
    cout << arr[i] <<" ";
    int x;
    cout<<endl<<"Number to find:";
    cin>>x;
    cout <<x<<" "<<"appeared "<<count_occurrences(arr, n, x)<<" times" ;
    return 0;
    }
