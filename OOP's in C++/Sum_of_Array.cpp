#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the Size of an Array" << endl;
    cin >> n;
    int arr[n];
    cout << "All the Element are" << endl;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of the Array is :" << sum << endl;
}