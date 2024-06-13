/*


#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n+1-i;j++)
    {
    cout<<j<<" ";
    }
	cout<<endl;
  }
return 0;
}

*/

#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  n=n+1;
  while(n--){
     for(int i=1;i<=n;i++){
         cout<<i;
         cout<<" ";
     }
     cout<<endl;
  }
}


























