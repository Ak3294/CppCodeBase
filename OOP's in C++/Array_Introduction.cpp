// # Approved By Akshay

#include <iostream>
using namespace std;

int main()
{
        // int a[]; //This is wrong statement
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        // int a[10]={1,2,3,4} // it will give result 1,2,3,4,223324,321345654,2346543,23456,123434,654332
        // int a[10]; // it will give result 0,0,0,0,0,0,0,0,0,0

    for (int i = 0; i < 10; i++)
    {
        //     a[i] = i * i;
        //     cout << a[i] << " ";
        //     cout << sizeof(a) << endl;
        cout << a[i] << endl;
    }
    // cout << sum << endl;
}
