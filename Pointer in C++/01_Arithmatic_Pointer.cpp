#include <iostream>
using namespace std;
int main()
{
	int a[3] = {10, 100, 200};
	int *p;
	for (int i = 0; i < 3; i++)
	{
		cout << "The value of *p :" << *p << endl;
		p++;
	}
	return 0;
}
