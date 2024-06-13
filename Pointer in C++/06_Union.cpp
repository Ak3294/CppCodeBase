#include<iostream>
using namespace std;

union Meal
{
    int Breakfast;
    int dinner;
    int lunch;
};


int main()
{
    union Meal m1,m2,m3;
    m1.Breakfast = 34;
    m2.dinner = 12;
    m3.lunch = 25;
    
}