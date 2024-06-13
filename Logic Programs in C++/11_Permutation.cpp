#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,r;
    cout<<"Enter the Value of n : ";
    cin>>n;
    cout<<"Enter the Value of r : ";
    cin>>r;

    int ans = fact(n)/ fact(n-r);
    cout<<ans<<endl;
}