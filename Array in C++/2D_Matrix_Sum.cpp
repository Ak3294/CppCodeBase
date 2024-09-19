// Calculate the Sum of 2D Matrix

#include <iostream>
using namespace std;
int main()
{
	int row, col;
	cout << "Enter the No of Rows :";
	cin >> row;
	cout << "Enter the No. of Columns :";
	cin >> col;
	int a[row][col], b[row][col], c[row][col], i, j;
	cout << "Enter First Matrix" << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "Enter Second Matrix" << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> b[i][j];
		}
	}
	cout << "Enter Sum of both Matrix are" << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
