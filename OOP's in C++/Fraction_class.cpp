#include <iostream>
using namespace std;

class Fraction
{
private:
    int num;
    int deno;

public:
    Fraction(int num, int deno)
    {
        this->num = num;
        this->deno = deno;
    }

    void Print()
    {
        // cout << "Numerator is :" << this->num << endl;
        // cout << "Denomenator is :" << this->deno << endl; // this-> is mandetary
        cout << this->num << "/" << deno;
        // cout << "fraction is :" << fraction << endl;
    }
    void Add(Fraction f2)
    {
        int LCM = this->deno * f2.deno; //this-> is optional
        int x = LCM / this->deno;
        int y = LCM / f2.deno;
        int num = x * num + y * f2.num;

        //store the result in f1
        this->num = num;
        this->deno = LCM;
        // cout << "LCM is :" << LCM << endl;
        // cout << "x is :" << x << endl;
        // cout << "y is :" << y << endl;

        simplify();
    }
    void simplify()
    {
        int HCF = 1;
        int j = min(this->num, this->deno); //optional
        for (int i = 1; i <= j; i++)
        {
            if (num % i == 0 && deno % i == 0)
            {
                HCF = i;
            }
        }
        //  inbuild function for HCF = __HCF(a,b);
        // int c = __HCF(a,b);
        //simplify
        num = num / HCF;
        deno = deno / HCF;
    }
};

int main()
{
    Fraction f1(10, 2);
    Fraction f2(15, 4);
    cout << "The Previous value :" << endl
         << "f1:";
    f1.Print();

    cout << endl
         << "f2:";
    f2.Print();

    f1.Add(f2);

    cout << endl
         << "The Updated Value is :" << endl
         << "f1:";
    f1.Print();

    cout << endl
         << "f2:";
    f2.Print();

    return 0;
}