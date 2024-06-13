#include <iostream>
using namespace std;

class Sample
{
    int a;
    static int b;

public:
    Sample(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b;
        cout<<endl;
    }
    static void display()
    {
    
        cout << "B is :" << b;
        // cout<<"A is :"<<a; // A is not accessible because A is not static
    }
};

int Sample ::b = 0; // initialize with zero
int main()
{
    Sample obj(10, 20), obj2(20, 40);
    obj.show();
    obj2.show();
    Sample::display();
    cout << endl;
    obj.show();
}