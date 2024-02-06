
#include<iostream>
using namespace std;

int main()
{
    int i, j, num, isPrime;
    cout<<"Enter Number for prime factorization: ";
    cin>>num;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            isPrime=1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1 && i!=num)
            {
                cout<<i<<" ";
            }
            if(isPrime==1 && i==num)
            {
                cout<<i<<" is prime";
            }
        }
    }

    return 0;
}
