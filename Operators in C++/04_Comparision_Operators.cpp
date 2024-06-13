#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 6;
    cout << "The value of a==b is: " << (a == b) << endl;
    cout << "The value of a!=b is:" << (a != b) << endl;
    cout << "The value of a>=b is: " << (a >= b) << endl;
    cout << "The value of a<=b is:" << (a <= b) << endl;
    cout << "The value of a>b is: " << (a > b) << endl;
    cout << "The value of a<b is:" << (a < b) << endl;
    cout << "The value of logical and operator((a==b)&&(a<b)) is :" << ((a == b) && (a < b)) << endl;
    cout << "The value of logical or operator((a==b)||(a<b)) is :" << ((a == b) || (a < b)) << endl;
    cout << "The value of a==b is :" << (a == b);
}
