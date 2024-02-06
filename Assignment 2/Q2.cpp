#include<iostream>
using namespace std;

int bigIn(int big1[], int size) {
	cout<<"Enter bigInt: ";
	for(int i=0; i<size; i++) {
		cin>>big1[i];
	}
}

void bigOut(int big1[], int size) {
	int i=0;
	while (big1[i] == 0) {
		i++;
	}
	while(i<size){
		cout << big1[i];
		i++;
	}
}

int bigAdd(int big1[], int big2[], int big3[], int size) {
	int c=0;
	for (int i=9; i>=0; i--) {
		big3[i]=big1[i]+big2[i]+c;
		if (i!=0) {
			if(big3[i]>=10) {
				c=1;
				big3[i]=big3[i]-10;
			}
			else{
				c=0;
			}
		}
	}
}

int bigDiff(int big1[], int big2[], int big3[], int s) {
	for (int i=9; i>=0;) {
		if (big1[i]<big2[i]) {
			big1[i]=big1[i]+10;
			big3[i]=big1[i]-big2[i];
			i--;
			big1[i]=big1[i]-1;
		}

		else{
			big3[i]=big1[i] - big2[i];
			i--;
		}
	}
	return big3[10];
}


int main() {
	const int size = 10;
	int big1[size];
	int big2[size];
	int big3[size + 1];
	int big4[size];

	cout << "Enter " << size << " digit long numbers\n";
	bigIn(big1, size);
	bigIn(big2, size);

	cout << "Big1: ";
	bigOut(big1, size);
	cout << endl;
	cout << "Big2: ";
	bigOut(big2, size);
	cout << endl;

	bigAdd(big1, big2, big3, size);
	cout << "Big1+Big2: ";
	bigOut(big3, size );
	cout << endl;

	bigDiff(big1, big2, big4, size);
	cout << "Big1-Big2: ";
	bigOut(big4, size);
	
	return 0;
}
