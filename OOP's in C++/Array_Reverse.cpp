#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << "All the Element are" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl;
    cout << "Array in simple order" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Array in Reverse order" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}