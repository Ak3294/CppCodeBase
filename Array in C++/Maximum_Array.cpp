// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the Size of an Array :";
//     cin>>n;
//         int arr[n];
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }

// }

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n, i;
    int mx = INT_MIN;
    cout << "Enter the Size of an Array:" << endl;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        int mx = max(mx, arr[i]);
        if (i == n - 1)
        {
            cout << mx << endl;
        }
    }
}