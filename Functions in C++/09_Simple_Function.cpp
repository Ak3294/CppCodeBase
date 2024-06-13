#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0);

int main()
{
    int s1, s2, s3;
    s1 = sum(12, 23);
    s2 = sum(12, 23, 45);
    s3 = sum(12, 23, 43, 76);
    cout << s1 << endl
         << s2 << endl
         << s3 << endl;

    return 0;
}

int sum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}