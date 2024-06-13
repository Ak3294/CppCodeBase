#include <iostream>
using namespace std;

class Father
{
public:
    void Dhruv()
    {
        cout << "This is First base Class" << endl;
    }
};

class Mother
{
public:
    void Shayamk()
    {

        cout << "This is Second base class" << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void Dhruwa()
    {

        cout << "This class is is Derived from both Father and Mother" << endl;
    }
};
int main()
{
    Child c1;
    c1.Dhruv();
    c1.Shayamk();
    c1.Dhruwa();
    return 0;
}