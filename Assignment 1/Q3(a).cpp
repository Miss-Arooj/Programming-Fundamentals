#include <iostream>
using namespace std;

int main()
{
    int n, reverse, sum = 0, i;
    cout << " Enter n: ";
    cin >> n;
    for (i=n;n!=0;n=n/10){
        reverse=n%10;
        sum =sum*10+reverse;
    }
    cout << " reverse: " << sum << endl;
return 0; 
}
