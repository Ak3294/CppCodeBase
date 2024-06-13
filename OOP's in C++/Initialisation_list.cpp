/* INITIALISATION LIST :
It's initialise constant properties and reference
properties at the time of memory allocation. */

#include <iostream>
using namespace std;

class Student
{
public:
  int age;
  const int rollnumber;

  int &x; // age reference variable

  Student(int roll, int a) : rollnumber(roll), age(a), x(this->age)
  { // Initialization list Syntax
    // rollnumber=roll;
  }
};
int main()
{
  Student s1(100, 10);
  s1.age = 30;
  // s1.rollnumber = 100;
  /* It will throw an error because in the student class first age and rollnumber both are garbage and
  age is over-right with 40 but rollnumber is not overright because it is constatnt. */
  return 0;

  // int i=5;
  // int const b=i;
  // cout<<b;
}