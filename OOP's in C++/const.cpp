#include <iostream>

using namespace std;

class A
{
    const int x;
public:
    A(int y) : x(y) // Initializer list to initialize const member x
    {
    }

    void show() const
    {
        cout << "Value of x: " << x << endl;
    }
};

int main()
{
    A a(5);
    a.show(); // Display the value of x
    return 0;
}
