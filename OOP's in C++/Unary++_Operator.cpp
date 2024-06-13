#include <iostream>
using namespace std;

class Marks
{
public:
    int x, y, z, total;

    void getinfo();
    void gettotal();
    void display();
    void operator++();
};

void Marks::getinfo()
{
    cout << "Enter the Marks of X, Y, and Z" << endl;
    cin >> x >> y >> z;
}

void Marks::gettotal()
{
    total = x + y + z;
}

void Marks::display()
{
    cout << "Total marks is: " << total << endl;
}

void Marks::operator++()
{
    ++x;
    ++y;
    ++z;
}

int main()
{
    Marks m;
    m.getinfo();
    m.gettotal();
    m.display();
    ++m;
    m.gettotal();
    m.display();

    return 0;
}
