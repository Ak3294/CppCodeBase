/*
                     //SIMPLE STRUCTURE PROGRAM USING typedef IN C++
#include <bits/stdc++.h>
using namespace std;

// Declaration of typedef
typedef struct employee
{

    int age;
    char block;
    float salary;

} emp;

int main()
{
    emp A;
    A.age = 85;
    A.block = 'G';
    A.salary = 99989.45;

    cout << "The value is : "
         << A.age << endl;

    cout << "The value is : "
         << A.block << endl;

    cout << "The value is : "
         << A.salary << endl;

    return 0;
}
*/

/*
                        //SIMPLE UNION PROGRAM USING C++
#include <iostream>
using namespace std;

union employee
{
    int age;
    char block;
    float salary;
};

int main()
{
    union employee A, B, C;

    A.age = 34;
    B.block = 'A';
    C.salary = 34.34;

    // Printing values
    cout << "The first value at "
         << "the allocated memory : "
         << A.age << endl;

    cout << "The next value stored "
         << "after removing the "
         << "previous value : "
         << B.block << endl;

    cout << "The Final value value "
         << "at the same allocated "
         << "memory space : "
         << C.salary << endl;
    return 0;
}

*/

// C++ program to illustrate the use
// of the Enums

#include <bits/stdc++.h>
using namespace std;

enum employee
{
    age,
    block,
    salary
};

employee A = age;
employee B = block;
employee C = salary;

int main()
{
    cout << "The numerical value "
         << "assigned to age : "
         << age << endl;

    cout << "The numerical value "
         << "assigned to block : "
         << block << endl;

    cout << "The numerical value "
         << "assigned to salary : "
         << salary << endl;

    return 0;
}


