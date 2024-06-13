//How Many Numbers between 1 to 1000 are divisible by 5 or 7?

#include<bits/stdc++.h>
using namespace std;

int NumberDivision(int a,int b, int d1,int d2){
    vector<int>ans;
    int count=0;
    for(int i=a;i<=b;i++){
        if(i%d1==0 || i%d2==0){
            count++;
            ans.push_back(i);
        }
    }
    cout<<count<<" Numbers between "<<a<<" and "<<b<<" are divisible by "<<d1<<" and "<<d2<<endl;

}

int main(){
    int a,b,d1,d2;
    cout<<"Enter the Starting Number of Division ";
    cin>>a;
    cout<<"Enter the Ending Number of Division ";
    cin>>b;
    cout<<"Enter the Division Number ";
    cin>>d1;
    cout<<"Enter another Division Number ";
    cin>>d2;
    NumberDivision(a,b,d1,d2);
}




































// #include<iostream>
// using namespace std;
// int divisible(int n,int a,int b)
// {
//     int c1=n/a;
//     int c2=n/b;
//     int c3=n/(a*b);
//     return c1+c2-c3;
// }
// int main()
// {
// int n,a,b;
// cin>>n>>a>>b;
// cout<<divisible(n,a,b)<<endl;
// return 0;
// }
