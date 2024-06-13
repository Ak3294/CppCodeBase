// Armstrong Number : Cube sum of Every digit in Number
#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0, temp;
    // where n= Number
    // r=digit(remainder)
    // sum = sum of cube of all digits
    //  temperary variable for hold the value of Exact Number
    cout << "Enter the Number =";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10; // remainder
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "It is an Armstrong Number" << endl;
    }
    else
        cout << "It is Not an Armstrong Number" << endl;
}