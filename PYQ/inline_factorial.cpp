#include <iostream>
using namespace std;

inline int factorial(int a)
{
    int fact = 1;
    for (int i = a; i > 0; i--)
    {
        int fact = fact * i;
    }
    return fact;
}
int main()
{
    int x;
    cout << "Enter the Number :";
    cin >> x;
    int res = factorial(x);
    cout << res << endl;
}