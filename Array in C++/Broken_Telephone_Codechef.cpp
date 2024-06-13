#include <iostream>
using namespace std;

int main()
{
	int n, count = 0, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			if (arr[0] == arr[i + 1])
			{
				i++;
			}
			else
			{
				count++;
				i++;
			}
		}
		cout << count << endl;
	}

	return 0;
}
