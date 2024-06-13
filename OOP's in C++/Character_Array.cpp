#include <iostream>
using namespace std;

int main()
{
    char name[100];
    cout << "Enter your Name:" << endl;
    cin >> name;
    name[3]='Z';
    cout << "Your Name is :" << name << endl;
}