#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }

    void print()
    {
        cout << "X is :" << x << "  Y is :" << y << endl;
    }

    Point operator-()
    {
        return Point(-x, -y);
    }
};
int main()
{
    Point p1(1, 3), p2;
    p1.print();
    p2.print();
    Point p3 = -p1; // it will throw error
    p3.print();
    return 0;
}