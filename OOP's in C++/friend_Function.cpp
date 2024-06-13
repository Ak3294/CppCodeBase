#include <iostream>
using namespace std;
class B;
class A
{
    int num1;

public:
    void setdata()
    {
        cout << "Enter a Value" << endl;
        cin >> num1;
    }
    friend int add(A, B); //Friend Function Declation
};

class B
{
    int num2;

public:
    void getdata()
    {
        cout << "Enter the Value" << endl;
        cin >> num2;
    }
    friend int add(A, B); // Friend Function Declaration
};
int add(A ob1, B ob2)
{
    return ob1.num1 + ob2.num2;
}
int main()
{
    A ob1;
    B ob2;
    ob1.setdata();
    ob2.getdata();
    cout << "Sum :" << add(ob1, ob2) << endl;
}