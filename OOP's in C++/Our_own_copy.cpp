// Inbuild copy constructor are made a shallow copy.

#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    int age;

public:
    char *name; // Allocate char array Dynamically

    Student(Student const &s)
    {
        this->age = s.age;
        // this->name=s.name;  //shallow copy

        // this is the code for deep copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, s.name);
    }
    Student(int age, char *name)
    {
        this->age = age;
        // this->name = name;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    void Display()
    {
        cout << "Age of the Student is : " << age << endl;
        cout << "Name of the Student is :" << name << endl;
    }
};
int main()
{
    char name[] = "Akshay Kumar Hiran";
    Student s1(20, name);
    s1.Display();

    Student s2(s1); // copy constructor called
    s2.name[0] = 'x';
    s1.Display();
    s2.Display();

    return 0;
}