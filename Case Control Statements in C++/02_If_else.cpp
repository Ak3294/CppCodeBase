#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Tell me your age :";
	cin >> age;
	if (age < 18)
	{
		cout << "You can not come to my party" << endl;
	}
	else if (age == 18)
	{
		cout << "You are a kid and you are get pass to the party" << endl;
	}
	else
	{
		cout << "Welcome to party" << endl;
	}
	return 0;
}
