// This Topic is a Part of OOP's Advanced
// TOPIC Name: Shallow and Deep Copy
// Shallow Copy-> Idealy we should Avoid Shallow Copy. It means Copy only the 0th indexed Address of the Array.
// Deep Copy is Copy the Entire Array

#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    int age;
    char *name; // Allocate char array Dynamically

public:
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

    name[3] = 'r';
    Student s2(30, name);
    s2.Display();
    name[0] = 'R';
    Student s3(40, name);
    s3.Display();

    return 0;
}