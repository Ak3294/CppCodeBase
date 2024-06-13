#include <iostream>
using namespace std;
class Student
{
    int a;

public:
    void setdata()
    {
        cout << "Enter the Value of A:";
        cin >> a;
    }
    void getdata()
    {
        cout << "Value of A is :" << a << endl;
    }
};

int main()
{
    // Object Declared Statically
    int a;
    // Student s1;
    // s1.setdata();
    // s1.getdata();

    // Object Declared Dynamically
    Student *s1 = new Student;
    // (*s1).setdata();
    // (*s1).getdata();
    s1->setdata();
    s1->getdata();
}