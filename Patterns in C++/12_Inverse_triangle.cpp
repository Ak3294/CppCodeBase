#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;

    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=4;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int k = 1; k <= 2 * n - i; k++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}