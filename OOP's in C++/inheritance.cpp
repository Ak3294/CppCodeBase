#include <iostream>
using namespace std;

class Base
{
protected:
    int count;

public:
    Base()
    {
        count = 0;
    }
    void display()
    {
        cout << "Count is :" << count << endl;
    }
    void operator++()
    {
        count++;
    }
};

class Derived : public Base
{
public:
    void operator--()
    {
        count--;
    }
};
int main()
{
    Derived i;
    ++i;
    ++i;
    i.display();
    --i;
    i.display();
    return 0;
}