// Constant Variable
/*
#include <iostream>
using namespace std;

class Circle
{
public:
    const int r;
    int arr;

    Circle(int x)
    {
        r = x;
    }
    void area()
    {
        arr = 2 * 3.14 * r;
    }
};
int main()
{
    Circle c(5);
    area();
    return 0;
}
*/

//CONSTANT FUNCTION
/*
#include <iostream>
using namespace std;

class Demo
{
    int x;

public:
    Demo(int a)
    {
        x = a;
    }
    int ABC() const
    {
        return x;
    }
};
int main()
{
    Demo d(5);
    cout << "The Value of x is :" << d.ABC() << endl;
    Demo d1(7);
    cout << "The value of x is :" << d1.ABC() << endl;
}
*/

//CONSTANT OBJECT
/*
#include <iostream>
using namespace std;

class Demo
{
    int x;

public:
    Demo(int a)
    {
        x = a;
    }
    int ABC()
    {
        return x;
    }
};
int main()
{
    const Demo d(5);
    cout << "The Value of x is :" << d.ABC() << endl;
    Demo d1(7);
    cout << "The value of x is :" << d1.ABC() << endl;
}

*/