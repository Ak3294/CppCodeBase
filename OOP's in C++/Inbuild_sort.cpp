// In the iostream library many header files are perform different different task.
// so, all the header files are cannot be remember at a time.
// The solution of this problem is we have to use "master header file"

// #include<iostream>
// #include<algorithm>
#include <bits/stdc++.h> // this is Master header file
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of an Array:";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of an Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "Sorted Array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}