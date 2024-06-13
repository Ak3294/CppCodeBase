#include<iostream>
using namespace std;

class ABC{
    int x,y,z;
    public:
    void getinfo(int,int,int);
    void display();
    void operator-();
};
void ABC::getinfo(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void ABC::display()
{
    cout<<x<<" "<<y<<" "<<z;
}
void ABC::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
 ABC ob;
 ob.getinfo(10,-20,30);
 ob.operator-();
 ob.display();
}