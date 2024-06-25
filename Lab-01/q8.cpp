#include<iostream>
using namespace std;
int main() {
  float hours, rate, salary, overtime, overtimePay;

    cout<<"Enter hours worked: " ;
    cin>>hours;
    cout<<"Enter the hourly rate of the employee (Rs.): ";
    cin>>rate;

    salary = hours * rate;
    if ( hours <= 40 ) {
      cout<<salary;
    }

    if ( hours > 40 ) {
      overtime = hours - 40;
      overtimePay = overtime * rate / 2;
      salary = salary + overtimePay;
      cout<<"Salary is Rs. "<<salary;
    }

  return 0;
}
