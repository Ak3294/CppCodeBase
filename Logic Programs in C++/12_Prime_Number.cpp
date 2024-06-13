#include <iostream>
using namespace std;
int main()
{
    int n, i, count = 0;
    cout << "Enter the Number : ";
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << "Number is Prime.";
    }
    else
    {
        cout << "Number is Not Prime.";
    }
    return 0;
}