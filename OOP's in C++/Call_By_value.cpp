#include<iostream>
using namespace std;

void swap(int a,int b);
int main()
{
  int a=10,b=20;
  cout<<"Before Calling Value of A is:"<<a<<endl;
  cout<<"Before Calling Value of B="<<b<<endl;
  swap(a,b);

  return 0;
}
void swap(int x,int y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
 cout<<"After the Calling Value of A is:"<<x<<endl;
 cout<<"After the Calling Value of B is:"<<y<<endl;
}
