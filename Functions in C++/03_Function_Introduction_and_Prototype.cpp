// function prototype
#include <iostream>
using namespace std;
void add(int, int);
int main()
{
    // calling the function before declaration.
    add(5, 3);
    return 0;
}

// function definition
void add(int a, int b)
{
    cout << (a + b);
}
