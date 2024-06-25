#include<iostream>
using namespace std;

int main() {
  float sales, commission, earnings;

    printf( "Enter sales in rupees: " );
    cin>>sales;

    if ( sales < 0 ) {
      cout<<"Sorry, salary cannot be computed,";
    }

    commission = sales / 100 * 9;
    earnings = commission + 2000;

    cout<< "Salary is RS. "<<earnings;

  return 0;
}
