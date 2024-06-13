// #Approved By Akshay

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an Array" << endl;
    cin >> n;
    int a[n];
    cout << "All the Elements are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int largest = a[0];
    int smallest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    cout << "The Smallest Value of an Array is:" << smallest << endl;
    cout << "The Largest Value of an Array is:" << largest << endl;
}
