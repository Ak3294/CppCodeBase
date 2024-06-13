#include <iostream>
using namespace std;

class ABC
{
    int x, y;

public:
    ABC(int, int);
    friend ostream &operator<<(ostream &, const ABC &);
};

ABC::ABC(int a, int b) : x(a), y(b) {}

ostream &operator<<(ostream &out, const ABC &p)
{
    out << "Value of X is: " << p.x << ", value of Y is: " << p.y;
    return out;
}

int main()
{
    ABC ob(5, 9);
    cout << ob << endl;
    cout << "Value of X and Y is: " << ob << endl;
    return 0;
}



/*
#include <iostream>
using namespace std;

class ABC
{
    int x, y;

public:
    ABC(int, int);
    istream &operator(istream &, ABC);
};
ABC ::ABC(int a, int b)
{
    x = a;
    y = b;
}
ABC::display()
{
    cout << "Value of X is :" << x << "Value of Y is :" << y << endl;
}
isteram ABC::operator>>(istream in, ABC p)
{
    cout << "enter the Two integer" << endl;
    in >> x >> y;
}
int main()
{
    ABC ob(5, 8);
    ob.display();
    cin >> ob;
    ob.display();

    return 0;
}
*/