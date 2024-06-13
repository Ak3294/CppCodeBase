#include <iostream>
using namespace std;

void printarray(int arr[][4], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[][4] = {(1, 2, 3), (1, 2, 5, 6)};
    printarray(arr, 2, 4);
    return 0;
}