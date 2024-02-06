#include <iostream>
using namespace std;

int main()
{
    int j, height;
    cout <<"Enter height: ";
    cin >> height;
    for(int i=1,k=0;i<=height;++i,k=0){
        for(j=1;j<=height-i;++j){
            cout<<"  ";
        }
        while(k!=2*i-1){
            cout<< "* ";
            ++k;
        }
        cout<< endl;
    }    
    return 0;
}
