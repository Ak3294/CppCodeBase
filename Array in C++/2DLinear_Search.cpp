// Perform Linear Seach in 2D Array
#include <iostream>
using namespace std;

int main()
{
    int rows, col;
    cout << "Enter the No. of Rows and Columns in Matrix" << endl;
    cin >> rows;
    cin >> col;
    int arr[rows][col];
    cout << "Enter the Matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int target;
    cout << "Enter the Number you want to Search in the Matrix :" << endl;
    cin >> target;
    int flag = 0, x, y;

    for (x = 0; x < rows; x++)
    {
        for (y = 0; y < col; y++)
        {
            if (arr[x][y] == target)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag = 1)
    {
        cout << "Element Found at " << x << " row and " << y + 1 << " column" << endl;
    }
    else
    {
        cout << "Element Not Found in the Matrix" << endl;
    }
}