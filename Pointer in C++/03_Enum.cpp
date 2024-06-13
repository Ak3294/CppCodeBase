#include <iostream>
using namespace std;
int main()
{
    enum Meal
    {
        Breakfast,
        dinner,
        lunch
    };
    Meal m1 = Breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;
    cout << "Breakfast :" << m1 << endl;
    cout << "Lunch :" << m2 << endl;
    cout << "dinner :" << m3 << endl;
    return 0;
}