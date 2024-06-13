#include <iostream>
using namespace std;

class Point
{
    int a, b;

public:
    Point(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "A is :" << a << "  B is : " << b << endl;
    }
    Point operator==(Point p) // It has one argument
    {
        Point temp(0, 0);
        temp.a = a == p.a;
        temp.b = b == p.b;
        return temp;
    }
};
int main()
{
    Point ob1(10,20),ob2(30,40),ob3(0,0);
    ob2 = ob1 == ob2;
    ob1.show();
    ob2.show();
    ob3.show();
    return 0;
}