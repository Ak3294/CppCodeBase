/*
#include<iostream>
using namespace std;
void primeSieve(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
      if(prime[i]==0)
	  {
        cout<<i<<" ";
      }
    }
    cout<<endl;
}
int main()
{
int n;
cout<<"Enter the Range of Number in between Find Prime Number"<<endl;
cin>>n;
primeSieve(n);
return 0;
}


*/
            //Prime of Factorization//
#include<iostream>
using namespace std;
void primefactor(int n)
{
    int spf[100]={0};
    for(int i=2;i<=n;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j++)
            {
                if(spf[j]==j)
                {
                    spf[j]==i;
                }
            }
        }
    }
    while(n!=1)
    {
        cout<<spf[n]<< " ";
        n=n/spf[n];
    }
}

int main()
{
int n;
cin>>n;
primefactor(n);
return 0;
}