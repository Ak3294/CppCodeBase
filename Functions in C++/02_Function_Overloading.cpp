#include<iostream>
using namespace std;
int sum(int a,int b)
 {
    return a+b;
 }
 int sum(int a,int b,int c)
 {
    return a+b+c;
 }
 int main()
 {
    cout<<"The Sum of 3 and 6 is :"<<sum(3,6)<<endl;
    cout<<"The Sum of 3,6,and 9 is :"<<sum(3,6,9)<<endl;
 }
