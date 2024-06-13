// Print the Table from 1 to 20
#include<iostream>
using namespace std;


int main(){
	int start,end;
	cout<<"Enter the Starting Number of the Table ";
	cin>>start;
	cout<<"Enter the Ending Number of the Table ";
	cin>>end;

	for(int i=start;i<=end;i++){
		for(int j=1;j<=10;j++){
			cout<<i*j<<" ";
		}
		cout<<endl;
	}
}