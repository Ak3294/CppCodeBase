#include <iostream>
using namespace std;

int main()
{
    int res[3];
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        res[i] = sum;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << res[i] << " ";
    }
}