// Find the Absolute Number
#include <iostream>
using namespace std;

int Absolute()
{
	int n;
	cin >> n;
	return n > 0 ? n : n * -1;
}
int main()
{
	int n = Absolute();
	cout << n << endl;
}
