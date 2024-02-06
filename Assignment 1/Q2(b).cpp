#include<iostream>
using namespace std;
int main()
{
    unsigned long long int decimalNum=0, mul=1, rem, binaryNum;
    cout<<"Enter bin number: ";
    cin>>binaryNum;
    while(binaryNum>0)
    {
        rem = binaryNum%10;
        decimalNum = decimalNum+(rem*mul);
        mul = mul*2;
        binaryNum = binaryNum/10;
    }
    cout<<"\nDecimal Equivalent: "<<decimalNum;
    cout<<endl;
    return 0;
}
