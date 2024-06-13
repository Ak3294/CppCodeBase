#include <iostream>
using namespace std;

class Complex
{
    float x, y;

public:
    Complex(float a = 0, float b = 0); // Default constructor with default parameter values
    void display();
    Complex operator+(Complex);
};

Complex::Complex(float a, float b)
{
    x = a;
    y = b;
}

void Complex::display()
{
    cout << x << " +i" << y << endl;
}

Complex Complex::operator+(Complex c)
{
    Complex temp(x + c.x, y + c.y); // Initialize temp with the sum of corresponding components
    return temp;
}

int main()
{
    Complex c1(2.4, 4.5), c2(3.5, 6.7), c3;
    c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
