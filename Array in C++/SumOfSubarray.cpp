// SubArray : Continuous part of Array.
#include <iostream>
using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            result = result + sum;
        }
    }
    cout << result << endl;
}