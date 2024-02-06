#include<iostream>
using namespace std;
int main()
{
    unsigned long long int decimalNum, mul=1, rem, binaryNum=0;
    cout<<"Enter Denary number: ";
    cin>>decimalNum;
    while(decimalNum>0)
    {
        rem = decimalNum%2;
        binaryNum = binaryNum+(rem*mul);
        mul = mul*10;
        decimalNum = decimalNum/2;
    }
    cout<<"\nBinary Equivalent: "<<binaryNum;
    cout<<endl;
    return 0;
}
