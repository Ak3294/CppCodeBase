// Function with argument but no return type
#include <iostream>
using namespace std;
void add(int, int);
int main()
{
    int a, b;
    cout << "Enter the First number" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;
    add(a, b);
    return 0;
}
void add(int a, int b)
{
    int c;
    c = a + b;
    cout << "The Sum is :" << c;
}