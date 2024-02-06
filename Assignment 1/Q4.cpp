#include <iostream>
using namespace std;
int main()
{
	unsigned long long int binary, i, j = 0, sum;
	cout << "Begin binary input: " << endl;
	cin >> binary;
	i = binary;
	while (binary == 0 || binary == 1) {
		i = (i * 10) + binary;
		j++;
		if (j >= 5) {
			sum = i % 100000;
			if (sum == 10101) {
				cout << "Input terminated." << endl;
				break;
			}
			cin >> binary;
		}
	}
	system("pause>0");
	return 0;
}
