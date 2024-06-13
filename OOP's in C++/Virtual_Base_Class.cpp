#include <iostream>
using namespace std;

class GrandFather
{
public:
    int x;
};
class Parent : virtual public GrandFather
{
public:
    int y;
};
class Child : virtual public GrandFather
{
public:
    int z;
};
class Boy : public Parent, public Child
{
public:
    int A;
};

int main()
{
    Boy obj;
    obj.x = 10;
    // obj.x = 100;

    obj.y = 210;
    obj.z = 1000;
    obj.A = 200;

    cout << "Value of x is :" << obj.x << endl;
    cout << "Value of y is :" << obj.y << endl;
    cout << "Value of z is :" << obj.z << endl;
    cout << "Value of A is :" << obj.A << endl;
    return 0;
}
