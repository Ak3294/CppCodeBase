#include<iostream>
using namespace std;
class Distance
{
    
   int meter;
   public:
    Distance()
    {
        meter=0;
    }
    friend int addFive(Distance);
};
int addFive(Distance d)
{
    d.meter=d.meter+5;
    return d.meter;
}
main()
{
  int meter;
  Distance d;
  cout<<"Distance:"<<addFive(d)<<endl;
}
