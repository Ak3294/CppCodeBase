// #include<iostream>
// using namespace std;
// int a = 10;
// int main()
// {
//     int a = 20;
//     cout << "The Global Variable is:" << ::a << endl; // Scope Resolution Operator are used to introduce Global Variable.
//     cout << "The Local variable is :" << a << endl;
// }
// Use of Scope Resolution Operator
//->To Define the Member function and constructor outside the Class.
//->To Declared Global Variable
//->To access the Class of static Variable
//->In Case of Multiple Inhertence

#include <iostream>
using namespace std;
class person
{
    int n = 10;

public:
    void dis()
    {
        cout << "The value is :" << n << endl;
    }

    void display()
    {
        cout << "The Value is :" << n << endl;
    }
};
int main()
{
    person p;
    p.display();
    p.dis();
    getch();
}