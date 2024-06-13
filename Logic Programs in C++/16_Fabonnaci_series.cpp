/*
In Fabonacci Series When the Number is Entered then print number
is sum of our last two terms.
*/

#include <iostream>
using namespace std;

int main()
{
    // In Fabonnaci series First and Second value is fixed as 0 and 1.
    int firstNum = 0;
    int secondNum = 1;
    int n, i, num;
    cout << "Enter the Number for Find Fabonnacci series :" << endl;
    cin >> num;
    cout << firstNum << " " << secondNum << " "; // printing 0 and 1
    for (i = 2; i < num; ++i)
    {
        n = firstNum + secondNum;
        cout << n << " ";
        firstNum = secondNum;
        secondNum = n;
    }
    return 0;
}