#include<iostream>
using namespace std;
int main()
{
    long int i,n,f=1;
    cout<<"Enter the number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial of Number is:"<<f;
    return 0;
}
