#include <iostream>
using namespace std;

int main() {
    int num, i;

    cout << "Input a Number: ";
    cin >> num;

    cout << "Factors: ";  
    for(i = 1; i <= num; ++i) {
        if(num % i == 0)
            cout << i << " ";
    }

    return 0;
}
