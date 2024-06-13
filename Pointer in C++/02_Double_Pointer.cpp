#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b;
    b = &a;
    int **c = &b;
    cout << "The address of &b is " << &b << endl;
    cout << "The address of c* is " << *c << endl;
    cout << "The address of c** is " << **c << endl;
    cout << "The address of c is " << c << endl;
    return 0;
}