#include <iostream>
using namespace std;
bool isSubset(int arr1[], int arr2[],
              int m, int n)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
            }
        if (j == m)
            return 0;
    }
    return 1;
}
int main()
{
    int num,m=0,n=0;
	cout<<"Enter size of 1st array: ";
	cin>>num;
	int arr1[num];
	for (int i=0;i<num;i++){
    cin>>arr1[i];}
	cout<<"Enter size of 2nd array: ";
	cin>>num;
	int arr2[num];
	for (int i=0;i<num;i++){
    cin>>arr2[i];}
    m = sizeof(arr1) / sizeof(arr1[0]);
    n = sizeof(arr2) / sizeof(arr2[0]);
    if (isSubset(arr1, arr2, m, n))
        cout<<"arr2[] is subset of arr1[] from index "<<n-1<<" to index "<<m-1;
    else
        cout<<"arr2[] is not a subset of arr1[]";
    return 0;
}
