#include <iostream>
using namespace std;

class Distance
{
public:
    // Member object
    int feet, inches;

    // No Parameter Constructor
    Distance()
    {
        // Initialize the value of feet and inches
        this->feet = 0;
        this->inches = 0;
    }
    // Parametrized Constructor
    Distance(int f, int i)
    {
        this->feet = f;
        this->inches = i;
    }

    Distance operator+(Distance &d2)
    {
        Distance d3;
        d3.feet = this->feet + d2.feet;
        d3.inches = this->inches + d2.inches;

        return d3;
    }
};

int main()
{

    Distance d1(8, 9);

    Distance d2(10, 2);
    Distance d3;
    d3 = d2 + d1;
    cout << "Total Feet and Inches is : " << d3.feet << " " << d3.inches;

    return 0;
}