// Let us take a number and reverse the number, when reverse number and actual number are equal then this is
// called palindrom number.
#include <iostream>
using namespace std;

int main()
{
    int temp, Num, reverse = 0, remainder;
    cout << "Enter the Number" << endl;
    cin >> Num;
    temp = Num;
    while (Num > 0)
    {
        remainder = Num % 10;
        reverse = (reverse * 10) + remainder;
        Num = Num / 10;
    }
    if (temp == reverse)
    {
        cout << "Number is Palindrom";
    }
    else
    {
        cout << "Number is Not Palindrom";
    }
    return 0;
}