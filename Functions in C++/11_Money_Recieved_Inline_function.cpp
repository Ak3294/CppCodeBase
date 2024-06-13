#include <iostream>
using namespace std;

inline int moneyrecieved(int currentmoney, float factor)
{
	return currentmoney * factor;
}
int main()
{
	int money = 10000;
	float profit1 = moneyrecieved(money, 1.04);
	float profit2 = moneyrecieved(money, 1.14);
	cout << "If you have " << money << " Rs in your bank account ,you will recive " << profit1 << "Rs after 1 year" << endl;
	cout << "If you are VIP " << money << " Rs in your bank account ,you will recive " << profit2 << "Rs after 1 year" << endl;
	return 0;
}
