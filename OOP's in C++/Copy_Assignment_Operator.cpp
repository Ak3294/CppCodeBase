/*
// COPY-ASSIGNMENT OPERATOR
#include <iostream>
using namespace std;

class Student
{
    int age, roll_no;

public:
    Student(int a, int r)
    {
        cout << "Second Constructor Called" << endl;
        roll_no = r;
        age = a;
    }
    void display()
    {
        cout << "Age is :" << age << endl;
        cout << "Roll Number is :" << roll_no << endl;
    }
};

int main()
{
    Student s1(10, 100);
    s1.display();
    Student s2(20, 200);
    s2.display();
    Student *s3 = new Student(30, 300);
    s3->display();

    s2 = s1; // copy assignment operator
    s2.display();
    *s3 = s1;
    s3->display();
    s2 = *s3;
    s2.display();
}
*/

// DESTRUCTOR
#include <iostream>
using namespace std;

class Student
{
    int age, roll_no;

public:
    Student(int a, int r)
    {
        cout << "Second Constructor Called" << endl;
        roll_no = r;
        age = a;
    }
    void display()
    {
        cout << "Age is :" << age << endl;
        cout << "Roll Number is :" << roll_no << endl;
    }
    ~Student()
    {
        cout << "All Data are destroyed" << endl;
    }
};

int main()
{
    Student s1(10, 100);
    s1.display();
    Student s2(20, 200);
    s2.display();
    Student *s3 = new Student(30, 300); // Destructor not be called for dynamic object creation. 
    s3->display();

    s2 = s1; // copy assignment operator
    s2.display();
    *s3 = s1;
    s3->display();
    s2 = *s3;
    s2.display();
    delete s3;

    return 0;
}