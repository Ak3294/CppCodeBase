#include <iostream>
using namespace std;

int main()
{
    int Num, remainder, sum = 0;
    cout << "Enter the Number :"; // 623
    cin >> Num;
    while (Num > 0)            // condition true
    {                          
        remainder = Num % 10;  // reaminder=3 --> 2 -->6
        sum = sum + remainder; // 0+3=3 --> 3+2=5 --> 5+6=11
        Num = Num / 10;        // Num=62-->6
    }
    cout << "Sum of the Digits is : " <<sum<< endl;
    return 0;
}
