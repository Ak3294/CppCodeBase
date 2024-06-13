#include <iostream>
using namespace std;

class Base // This is class Base
{
public:
    virtual void display() = 0; // It is a pure virtual function
};

class Derived : public Base
{ // This is class Derived derived from Base class publicly
public:
    void display()
    { // It is the overridden method of pure virtual function
        cout << "This is derived class display()" << endl;
    }
};

int main()
{

    Derived ob;   // Object is created to the Derived class
    Base *p;      // Pointer object is created to the Base class
    p = &ob;      // Address of Derived class object is stored in the pointer
    p->display(); // It will access the display() method of Derived class
}