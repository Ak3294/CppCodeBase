#include <iostream>
using namespace std;

int main()
{
    // where Num = Number these are entered
    //  rev = 0, it is a reverse Number initialize with 0
    //  remainder : it is a remainder when Number divided by 10
    int Num, reverse = 0, remainder;
    cout << "Enter the Number :";
    cin >> Num;
    while (Num != 0)
    {
        remainder = Num % 10;
        reverse = (reverse * 10) + remainder;
        Num = Num / 10;
    }
    cout << "Reverse Number is :" << reverse;
    return 0;
}
