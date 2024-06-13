#include <iostream>
#include <algorithm>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denomenator;

public:
    Fraction()
    {
    }

    Fraction(int numerator, int denomenator)
    {
        this->numerator = numerator;
        this->denomenator = denomenator;
    }

    int getNumerator() const
    {
        return numerator;
    }

    int getDenomenator() const
    {
        return denomenator;
    }

    void setNumerator(int n)
    {
        numerator = n;
    }

    void setDenomenator(int d)
    {
        denomenator = d;
    }

    void print() const
    {
        cout << this->numerator << "/" << denomenator << endl;
    }

    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denomenator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denomenator % i == 0)
            {

                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denomenator = this->denomenator / gcd;
    }

    void Add(Fraction const &f2)
    {
        int lcm = denomenator * f2.denomenator;
        int x = lcm / denomenator;
        int y = lcm / f2.denomenator;

        int num = x * numerator + (y * f2.numerator);

        numerator = num;
        denomenator = lcm;
        simplify();
    }

    void multiply(Fraction const &f2)
    {
        numerator = numerator * f2.numerator;
        denomenator = denomenator * f2.denomenator;

        simplify();
    }
};