#include <iostream>
using namespace std;

int abc(int);
long abc(long);
double abc(double);

int main()
{
    int i = 112, P;
    long j = 1000000, Q;
    double k = 12.345, R;

    P = abc(i);
    Q = abc(j);
    R = abc(k);

    cout << "The Value of P is Equal to " << P << endl;
    cout << "The Value of Q is Equal to " << Q << endl;
    cout << "The Value of R is Equal to " << R << endl;
    return 0;
}

int abc(int ii)
{
    return (ii > 0 ? ii : ii * -1);
}

long abc(long jj)
{
    return (jj > 0 ? jj : jj * -1);
}

double abc(double kk)
{
    return (kk > 0 ? kk : kk * -1);
}
