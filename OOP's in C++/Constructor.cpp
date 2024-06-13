// DEFAULT  AND PARAMETRIZED CONSTRUCTOR
/* 
#include <iostream>
using namespace std;

class Student
{
    int age, roll_no;

public:
    Student()
    {
        cout << "First Constructor Called" << endl;
        cout << "Enter the Value of age and Roll number" << endl;
        cin >> age >> roll_no;
    }
    Student(int a)
    {
        cout << "Second Constructor called" << endl;
        age = a;
    }
    Student(int a, int r)
    {
        cout << "Third Constructor Called" << endl;
        age = a;
        roll_no = r;
    }
    void Display()
    {
        cout << "Value of Age is :" << age << endl;
        cout << "Value of Roll Number is :" << roll_no << endl;
    }
};

int main()
{
    Student s1;
    s1.Display();
    Student s2(100);
    s2.Display();
    Student s3(23, 56);
    s3.Display();
}
*/

//
/*
#include <iostream>
using namespace std;

class Student
{
    int age, roll_no;

public:
    Student(int roll_no)
    {
        cout << "First Constructor Called" << endl;
        this->roll_no = roll_no;
        cout << "Roll nUmber is :" << roll_no << endl;
    }
    Student(int a, int r)
    {
        cout << "Second Constructor Called" << endl;
        cout << "This keyword  :" << this << endl;
        this->roll_no = r; // Using this is Optional
        this->age = a;
    }
    void display()
    {
        cout << "Value of Age is :" << age << endl;
        cout << "Value of Roll NUmber is :" << roll_no << endl;
    }
};
int main()
{
    Student s1(100, 200);
    cout << "Address of S1 is :" << &s1 << endl;
    Student s2(100);
}
*/

// COPY CONSTRUCTOR : Create an object which is copy of other object
// In copy constructor our Aim is student s1(100,200); ---> student s2; ---> s2.age=100; and s2.roll_no=200;

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
    Student s1(10, 100); // paramertrized constructor : user defined
    cout << "for s1 Object:" << endl;
    s1.display();

    Student s2(s1); // copy construct inbuild
    cout << "for S2 Object:" << endl;
    s2.display();

    // Object Declaration Dynamically
    Student *s3 = new Student(20, 200);
    cout << " for S3  Object is :" << endl;
    s3->display();
    
    // error: conversion from 'Student*' to non-scalar type 'Student' requested
    Student s4 = new Student(*s3);
    cout << "For S4 Object is :" << endl;
    s4.display();

    return 0;
}