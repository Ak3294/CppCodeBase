/*
#include <iostream>
using namespace std;

class student
{
    int roll_number;
    string stu_name;
    string course_name;
    string father_name;
    string DOB;
    int i;

public:
    void Input_student()
    {

        cout << "Enter the Roll Number of Student " << i << endl;
        cin >> roll_number;

        cout << "Enter the Name of Student1 :" << i << endl;
        cin >> stu_name;

        cout << "Enter the Course Name of Student" << i << endl;
        cin >> course_name;

        cout << "Enter the father Name of Student" << i << endl;
        cin >> father_name;

        cout << "Enter the Date of Birth of Student" << endl;
        cin >> DOB;
    }
    void display_student()
    {
        cout << "Roll Number of Student " << i << " :" << roll_number << endl;
        cout << "Name of Student " << i << " : " << stu_name << endl;
        cout << "Course name of Student " << i << " : " << course_name << endl;
        cout << "Father Name of Student " << i << " : " << father_name << endl;
        cout << "Date of Birth of Student " << i << " : " << DOB << endl;
    }
};

class exam : public student
{
    int mark1, mark2, mark3, i;

public:
    void input_marks()
    {
        cout << "Marks Out of 70" << endl;
        cout << "Enter Marks1 of student " << i;
        cin >> mark1;
        cout << "Enter Marks2 of student " << i;
        cin >> mark2;
        cout << "Enter Marks3 of student " << i;
        cin >> mark3;
    }

    void display_result()
    {
        int result = (mark1 + mark2 + mark3) / 70;
        int percentage = result * 100;
        cout << "Result of Student " << i << " : " << percentage << endl;
    }
};

int main()
{
    exam p[10];

    for (int i = 1; i <= 10; i++)
    {
        p->Input_student();
        p->input_marks();
    }
    for (int i = 1; i <= 10; i++)
    {
        p->display_student();
        p->display_result();
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

class student
{
public:
    int rno;
    char name[20];
    int m1, m2, m3;

public:
    void details()
    {
        cout << "\nROLL_NO NAME MARKS THREE SUBJECT" << endl;
        cin >> rno >> name >> m1 >> m2 >> m3;
    }
    void details(int nm)
    {
        cout << "\nDetails of ONE student :\n";
        cout << "\nROLL_NO\tNAME\tMARK1\tMARK2\tMARK3 \n";
        cout << "== == == == == == == == == == == == == == == == == == =\n";
        cout << nm << "\t" << name << "\t" << m1 << "\t" << m2 << "\t" << m3 << endl
             << "\n\n";
    }
    void details(char *)
    {
        cout << rno << "\t" << name << "\t" << m1 << "\t" << m2 << "\t" << m3 << endl;
    }
};
int main()
{
    int rn, i, n;
    student s[20];
    cout << "How many student inform : \n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].details();
    }
    cout << "Enter the roll number :\n ";
    cin >> rn;
    for (i = 0; i < n; i++)
    {
        if (rn == s[i].rno)
        {
            s[i].details(rn);
        }
    }
    cout << "Details of all student : \n";
    cout << "ROLL_NO\tNAME\tMARK1\tMARK2\tMARK3 \n\n";
    cout << " == == == == == == == == == == == == == == == == == == =\n ";
    for (i = 0; i < n; i++)
    {
        s[i].details(s[i].name);
    }
    return 0;
}