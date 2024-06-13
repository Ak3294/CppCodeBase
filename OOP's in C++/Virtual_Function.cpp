#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "This is Base Class" << endl;
    }
};

class derived : public Base
{
public:
    void display()
    {
        cout << "This is derived Class" << endl;
    }
};
int main()
{
    Base ob1;
    derived ob2;
    Base *p;

    p = &ob1;
    p->display();
    p = &ob2;
    p->display();

    return 0;
}