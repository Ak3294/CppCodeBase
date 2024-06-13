#include<iostream>
using namespace std;
int main()
{
   int marks[4]={23,34,32,12};
   cout<<"This are Marks"<<endl;
   int i=0;
   while(i<4)
   {
    cout<<"The value of marks "<< i <<" is :"<<marks[i]<<endl;
    i++;
   }
   return 0;
}