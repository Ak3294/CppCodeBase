#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inches;

    Distance(int f, int i)
    {
        this->feet = f;
        this->inches = i;
    }

    void operator-()
    {
        feet--;
        inches--;
        cout << "Feet decerement:" << feet << endl;
        cout << "Inches decerement:" << inches << endl;
    }
};
int main()
{
    Distance obj(3, 5);
    -obj;

    return 0;
}