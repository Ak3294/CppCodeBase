/*

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

*/

#include <iostream>
using namespace std;

int main()
{
    int r, i, j;
    cout << "Enter no. of rows: ";
    cin >> r;

    for (i = 1; i <= r/2; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "* ";
        for (j = 1; j <= 2 * (r/2 - i); j++)
            cout << "  ";
        for (j = 1; j <= i; j++)
            cout << "* ";
        cout << "\n";
    }
    for (i = r/2; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            cout << "* ";
        for (j = 1; j <= 2 * (r/2 - i); j++)
            cout << "  ";
        for (j = 1; j <= i; j++)
            cout << "* ";
        cout << "\n";
    }
    return 0;
}
