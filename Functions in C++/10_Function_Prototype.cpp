// Function Prototype
// type function-name (argument)
#include <iostream>
using namespace std;
int sum(int a, int b);
int main()
{
    int num1, num2;
    cout << "Enter the first Number" << endl;
    cin >> num1;
    cout << "Enter Second Number" << endl;
    cin >> num2;
    int sol=sum(num1, num2);
    cout << "The sum is :" << sol;
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}