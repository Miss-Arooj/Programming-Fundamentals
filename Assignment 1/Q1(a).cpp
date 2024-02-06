#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 long int i, n;
 double sum=0.0, term, pi;
 
 cout<<"Enter number of terms: ";
 cin>>n;

 /* Applying Leibniz Formula */
 for(i=0;i< n;i++)
 {
  term = pow(-1, i) / (2*i+1);
  sum += term;
 }
 pi = 4 * sum;

 cout<<pi;
 
 return 0;
}
