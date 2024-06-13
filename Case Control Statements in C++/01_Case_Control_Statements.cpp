#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your age" << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You have chance to given Vote" << endl;
        break;
    case 25:
        cout << "You have chance to get Married" << endl;
        break;
    case 30:
        cout << "You have to become a father" << endl;
        break;
    case 35:
        cout << "Give the position for our life" << endl;
        break;
    case 65:
        cout << "Are you Enter in oldage position" << endl;
        break;

    default:
        cout << "I have no information about that" << endl;
        break;
    }
}
