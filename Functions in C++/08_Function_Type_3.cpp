#include <iostream>
using namespace std;
int add(int, int);
int main()
{
    int a, b, c;
    cout << "Enter the First number" << endl;
    cin >> a;
    cout << "Enter the Second number" << endl;
    cin >> b;
    c = add(a, b);
    cout << "Sum is :" << c;
    return 0;
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}