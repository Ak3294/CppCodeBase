#include <iostream>
using namespace std;
struct student
{
    int id;
    char name[30];
    float percentage;
} s;
int main()
{
    cout << "Enter the name" << endl;
    gets(s.name);
    fflush(stdin);
    cout << "Enter the Id" << endl;
    cin >> s.id;
    cout << "Enter Percentage" << endl;
    cin >> s.percentage;
    cout<<endl;
    cout << s.name << endl;
    cout << s.id << endl;
    cout << s.percentage << endl;
    return 0;
}