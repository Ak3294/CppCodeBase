// #Approved By Akshay

#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cout << "Enter the Value of A" << endl;
    cin >> a;
    cout << "Enter the Value of B" << endl;
    cin >> b;
    cout << "Before Swaping Value of A and B is :" << a << " " << b << endl;
    // int temp = a;
    // a = b;
    // b = temp;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    // swap(a, b);
    cout << "Value of A is:" << a << endl;
    cout << "Value of B is:" << b << endl;
}