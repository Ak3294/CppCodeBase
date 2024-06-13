#include <iostream>
using namespace std;

class student
{
protected:
    int rollNumber;

public:
    void getnumber()
    {
        cout << "Enter the Roll Number :";
        cin >> rollNumber;
    }

    void putnumber()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class test : virtual public student
{
protected:
    float marks1, marks2;

public:
    void getmarks()
    {
        cout << "Enter the Marks1 and Marks2:" << endl;
        cin >> marks1 >> marks2;
    }

    void putmarks()
    {
        cout << "Marks Obtained By First and Second Subject: " << endl;
        cout << "First Number is = " << marks1 << endl;
        cout << "Second marks is = " << marks2 << endl;
    }
};

class sports
{
protected:
    float score;

public:
    void getscore()
    {
        cout << "Enter the Score in the Sports:";
        cin >> score;
    }

    void putscore()
    {
        cout << "Sports Score: " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = marks1 + marks2 + score;
        putnumber();
        putmarks();
        putscore();
        cout << "Total Score: " << total << endl;
    }
};

int main()
{
    result r;

    r.getnumber();
    r.getmarks();
    r.getscore();
    r.display();

    return 0;
}