#include <iostream>
using namespace std;
int main()
{
	int i, n, sum = 0;
	cout << "Enter the size of an array" << endl;
	cin >> n;
	int a[n];
	cout << "Enter array Element" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	cout << "sum :" << sum << endl;
	return 0;
}