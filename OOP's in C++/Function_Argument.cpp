// #include <iostream>
// #include <math.h>
// using namespace std;
// int add(int, int); // function prototype
// int main()
// {
//     int a = 10, b = 23;
//     cout << "Sum of the Numbers is :" << add(a, b) << endl;
// }
// int add(int x, int y)
// {
//     return x + y;
// }

// // CALL BY REFERENCE
// #include <iostream>
// using namespace std;
// void swap(int *x, int *y);
// int main()
// {
//     int a = 10, b = 20;
//     cout<<"Before Swapping: ";
//     cout<<"a="<<a<<" "<<" b="<<b<<endl;
//     swap(&a, &b);
//     cout<<"a="<<a<<" b="<<b;
//     return 0;
// }
// void swap(int *x, int *y)
// {
//     int t;
//     t = *x;
//     *x = *y;
//     *y = t;
// }

//  CALL BY VALUE
#include<iostream>
using namespace std;
int change(int x);
int main()
{
  int x = 100;
  printf("Before function call x=%d\n", x);//100
  change(x); //passing value in function
  printf("After function call x=%d\n", x);
  return 0;
}
int change(int x)
{
    x=5;
}
