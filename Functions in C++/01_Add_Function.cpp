/*
#include<iostream>
using namespace std;
void add();
int main()
{
    add();
    return 0;
}
void add()
{
int num1,num2,c;
cout<<"Enter the first Number"<<endl;
cin>>num1;
cout<<"Enter Second Number"<<endl;
cin>>num2;
c=num1+num2;
cout<<"The sum is :"<<c;
}

*/

// Function with argument but no return type
#include <iostream>
using namespace std;
int add();
int main()
{
    int c;
    c = add();
    cout << "Sum is :" << c;
}
int add()
{
    int a, b, c;
    cout << "Enter the First number" << endl;
    cin >> a;
    cout << "Enter the Second number" << endl;
    cin >> b;
    c = a + b;
    return c;
}
