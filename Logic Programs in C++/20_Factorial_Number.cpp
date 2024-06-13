#include <iostream>
using namespace std;

int main()
{
  int fact = 1, Num, i;
  cout << "Enter the Number for Find Factorial :";
  cin >> Num;
  if (Num > 0)
  {
    for (i = 2; i <= Num; i++)
    {
      fact = fact * i; /// 1*1 -->1*2 -->2*3 -->6*4-->24*5 -->120
    }
  }
  cout<<fact<<endl;
}