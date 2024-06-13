#include <iostream>
using namespace std;

class Square //This is Base Class
{
protected:
    int value;

public:
    void realValue()
    {
        cout << "Enter the Value" << endl;
        cin >> value;
    }
    void Display()
    {
        cout << "This is The Base class and the Value of the Number is:" << value << endl;
    }
};

class NewSquare : public Square
{
public:
    void Show()
    {
        cout << "This is Derived Class and the Square of given Value is :" << value * value << endl;
    }
};
int main()
{
    NewSquare d1;
    d1.realValue();
    d1.Display();
    d1.Show();

    return 0;
}