/*
Element of 2D Array are Inserted in 1D Array  
a[i][j]=i*c+j;
where a[R][C] are declared previously

*/
#include <iostream>
using namespace std;

void printarray(int arr[][3], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[2][3];
    int m, n;
    cout << "Enter the Value of Rows:" << endl;
    cin >> m;
    cout << "Enter the Value of Column:" << endl;
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    printarray(arr, m, n);
}