
#include <iostream>
using namespace std;

int printnum(int n)
{
    if (n == 0)
    {
        return 1;
    }

    printnum(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter the Integer :";
    cin >> n;
    printnum(n);

    return 0;
}
