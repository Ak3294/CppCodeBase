// Function with no argument and no return type
#include <iostream>
using namespace std;
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int num1, num2, c;
    cout << "Enter the first Number" << endl;
    cin >> num1;
    cout << "Enter Second Number" << endl;
    cin >> num2;
    c = num1 + num2;
    cout << "The sum is :" << c;
}