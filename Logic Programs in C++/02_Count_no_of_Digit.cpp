// Count Number of Digits in the Given Number
#include<iostream>
using namespace std;

int CountDigits(int n){
	int count=0;
	if(n<0){
		n=n*-1;
	}
	while (n>0){
		count++;
		n/=10;
	}
	return count;

}

int main(){
	int n;
	cin>>n;
	int count = CountDigits(n);
	cout<<count<<endl;
}










































// // write a program to count total digit in a given integer;
// #include<stdio.h>
// int main()
// {
// 	int n,count=0;
// 	printf("enter the integer\n"); // ex.n=1234
// 	scanf("%d",&n);
// 	while(n!=0)//condition true
// 	  {
// 	  	n=n/10;
// 	  	count++;
//       }  
//         printf("number of digit is:%d ",count);
//   	    return 0;	  	
	  
// }

