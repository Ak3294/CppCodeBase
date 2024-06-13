#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int x,y,n,r,sum=0;
       cin>>x>>y>>n>>r;
       if((r/y)==n){
           cout<<"0"<<n;
           cout<<endl;
       }
       else if((r/x)==n){
           cout<<"-1"<<endl;
       }
       else{
           int p=(y*n);
           int q=(x-y);
           int s=(r-p)/q;
           if((r-(p))*(q)!=0){
               s*s+1;
           }
           cout<<(s+" "+(n-s))<<endl;;
       }
   }
	return 0;
}