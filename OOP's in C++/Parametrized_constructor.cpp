#include <iostream>
#include <math.h>
using namespace std;

class rectangle
{
    int length, Breadth, area, a;

public:
    rectangle(int length, int breadth)
    {
        area = length * Breadth;
    }
    void returnArea()
    {
        a = *area;
        cout << "the Area of the rectangle is " << a << endl;
    }
};
int main()
{
    rectangle r1(5, 4);
    r1.returnArea();
}