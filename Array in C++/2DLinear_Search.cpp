#include <iostream>
using namespace std;

int main()
{
    int rows, col;
    cout << "Enter the No. of Rows and Columns in Matrix" << endl;
    cin >> rows >> col;

    int arr[rows][col];
    cout << "Enter the Matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Entered Matrix is :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the Number you want to Search in the Matrix :" << endl;
    cin >> target;

    bool flag = false;
    int x = -1, y = -1; // Variables to store position of the target

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                flag = true;
                x = i; // Row index
                y = j; // Column index
                break; // Exit the inner loop when target is found
            }
        }
        if (flag) // Exit outer loop as well if the target is found
            break;
    }

    if (flag)
    {
        cout << "Element Found at " << x + 1 << " row and " << y + 1 << " column" << endl;
    }
    else
    {
        cout << "Element Not Found in the Matrix" << endl;
    }

    return 0;
}
