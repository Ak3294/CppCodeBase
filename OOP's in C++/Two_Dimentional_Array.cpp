#include <iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int m, n;
    cout << "Enter the Number of Row:";
    cin >> m;
    cout << "Enter the Number of Column:";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "All the Elements are:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}