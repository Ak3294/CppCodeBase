#include <iostream>
using namespace std;
int main()
{
    int *p;
    int marks[4] = {23, 34, 32, 12};
    p = marks;
    cout << "This are Marks" << endl;
    cout << "The value of marks[0] " << *p << endl;
    cout << "The value of marks[1] " << *(p + 1) << endl;
    cout << "The value of marks[2] " << *(p + 2) << endl;
    cout << "The value of marks[3] " << *(p + 3) << endl;
    return 0;
}