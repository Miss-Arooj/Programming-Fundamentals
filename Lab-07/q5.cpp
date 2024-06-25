#include<iostream>
using namespace std;
int main()
{
	int input, u=1, i1=7,i2=4,temp;
	int A[]={0,0,0,0,2,0,0,1,0};
	
	cout<<"Board:"<<endl<<"A[]: ";
	for (int i=0; i<9; i++){
    	cout << A[i] <<" ";
	}
	cout<<endl<<endl;
	
	while(1)
	{
		cout<<"User "<<u<<" turn(Enter Move): ";
		cin>>input;
		switch (input){
  			case 4:
  				if(u==1 && i1>0){
  					temp = A[i1];
    				A[i1] = A[i1-1];
    				A[i1-1] = temp;
    				i1--;
    				cout<<"User1 moved from location "<<i1+2<<" to location "<<i1+1;
    				if(A[i1]==1 && A[i1+1]==2){
    					cout<<endl<<"User1 caught User2 at location "<<i1+1<<". User1 won!!!";
    					return 0;
					}
				}
				else if(u==2 && i2>0){
  					temp = A[i2];
    				A[i2] = A[i2-1];
    				A[i2-1] = temp;
    				i2--;
    				cout<<"User1 moved from location "<<i2+2<<" to location "<<i2+1;
    				if(A[i2]==2 && A[i2+1]==1){
    					cout<<endl<<"User1 caught User2 at location "<<i2+1<<". User1 won!!!";
    					return 0;
					}
				}
				else{
					cout<<"Going nowhere! User"<<u<<" is at edge, further cannot move on left";
				}
				cout<<endl<<"A[]: ";
				for (int i=0; i<9; i++){
    			cout << A[i] <<" ";
				}
    			break;
  			case 6:
  				if(u==1 && i1<8){
  					temp = A[i1];
    				A[i1] = A[i1+1];
    				A[i1+1] = temp;
    				i1++;
    				cout<<"User2 moved from location "<<i1<<" to location "<<i1+1;
    				if(A[i1]==1 && A[i1-1]==2){
    					cout<<endl<<"User2 caught User1 at location "<<i1<<". User1 won!!!";
    					return 0;
					}
				}
  				else if(u==2 && i2<8){
  					temp = A[i2];
    				A[i2] = A[i2+1];
    				A[i2+1] = temp;
    				i2++;
    				cout<<"User2 moved from location "<<i2<<" to location "<<i2+1;
    				if(A[i2]==2 && A[i2-1]==1){
    					cout<<endl<<"User2 caught User1 at location "<<i2<<". User1 won!!!";
    					return 0;
					}
				}
				else{
					cout<<"Going nowhere! User"<<u<<" is at edge, further cannot move on right";
				}
				cout<<endl<<"A[]: ";
				for (int i=0; i<9; i++){
    			cout << A[i] <<" ";
				}
    			break;
    		case 0:
    			cout<<"Going nowhere! User"<<u<<" decide to remain still in his position"<<endl;
    			cout<<"A[]: ";
				for (int i=0; i<9; i++){
    			cout << A[i] <<" ";
				}
    			break;
    		default:
    			cout<<"Going nowhere! User"<<u<<" press invalid key";
		}
		u=u+1;
		if(u>2){
			u=1;
		}
		cout<<endl;
	}
	
	return 0;
}
