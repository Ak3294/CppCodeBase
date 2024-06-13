// STATIC BINDING
/*
#include<iostream>
using namespace std;

class BASE
{
  int a=10;
  public:
  void show()
  {
      cout<<"A is :"<<a;
  }
};

class Derived:public BASE
{
    int x=50;
    public:
    void show()
    {
        cout<<"X:"<<x;
    }

};

int main()
{
  Derived d;
  d.show();
}

*/

//DYNAMIC BINDING

#include <iostream>
using namespace std;

class BASE
{
    int a = 10;

public:
    virtual void show()
    {
        cout << "A is :" << a;
        cout<<endl;
        
    }
};

class Derived : public BASE
{
    int x = 50;

public:
    void show()
    {
        cout << "X:" << x;
        cout<<endl;
    }
};

int main()
{
    BASE *B;
    BASE b;
    Derived d;
    B=&b;
    B->show();
    B=&d;
    B->show();
}
