#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    float principal, rate, com_interest, tot_amount, time;
    cout << "Enter the Principal Amount(in Rupees) : ";

    cin >> principal;
    cout << "Enter the rate of interest per 100 Rupees : ";

    cin >> rate;
    cout << "Enter the Time Period (in Months) :";

    cin >> time;
    tot_amount = principal * (pow((1 + rate / 100), time));
    com_interest = tot_amount - principal;

    cout << "Congratulations! - Your Results are Here" << endl;
    cout << "The Total Amount is :" << tot_amount << " "
         << "Rupees" << endl;
    cout << "The Compound Interest is : " << com_interest << " "
         << "Rupees" << endl;

    return 0;
}