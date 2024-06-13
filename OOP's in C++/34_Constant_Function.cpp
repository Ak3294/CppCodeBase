#include <iostream>
#include "akshay.cpp" // Include your Fraction class implementation file here

using namespace std;

int main()
{
    Fraction f1(10, 5);
    Fraction f2(15, 4);

    // Assuming Fraction class has a default constructor
    Fraction const f3; // Constant Objects
    cout << f3.getNumerator() << " " << f3.getDenomenator() << endl;

    // Trying to call a non-const member function on a const object will result in a compilation error
    // f3.setNumerator(10); // Error: Cannot modify const object

    return 0;
}
