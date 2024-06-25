#include<iostream>
using namespace std;
void rectangle(int rows,int columns);
int main(){
	int rows,columns;
	cout<<"Enter no. of rows:";
	cin>>rows;
	cout<<"Enter no. of columns:";
	cin>>columns;
	if(rows<0&&columns<0)
	cout<<"Rectangle printing is not possible";
	else
	rectangle(rows,columns);
	
return 0;	
}
void rectangle(int height, int width){
	int i,j;
	for(i=0;i<height;i++){
		for(j=0;j<width;j++){
			cout<<"o";
		}
		cout<<endl;
	}
}
