#include <iostream>
using namespace std;

class GrandParent //This is the Base class Grandparent
{
public:
    void Display()
    {
        cout << "This is grandParent class" << endl;
    }
};

class Parent : public GrandParent //This is the Derived class Parent from Garndfather class Publicily
{
public:
    void Print()
    {
        cout << "This is Parent Class" << endl;
    }
};

class Child : public Parent // This is Derived class Child derived from Parent class Publicily
{
public:
    void show()
    {

        cout << "This is Childern class" << endl;
    }
};
int main()
{
    Child c1;     // Object Created from child class
    c1.Display(); // garndfather class function called
    c1.Print();   // Parent class function called
    c1.show();    // Child class function called

    return 0;
}