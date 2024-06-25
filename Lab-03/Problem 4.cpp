#include <iostream>
using namespace std;

int main() {
    int n, i, prod=0, sum1=0, result1=0, result2=0;

    cout << "Input a Number: ";
    cin >> n;
  
    for(i = 1; i <= n; i++) {
        sum1=sum1+i;
        prod=i*i;
        result2=result2+prod;
    }
    result1=sum1*sum1;

    cout<<result1<<"-"<<result2<<"="<<result1-result2;

    return 0;
}
