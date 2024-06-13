#include <iostream>
using namespace std;

class Index
{
    int count;

public:
    Index()
    {
        count = 0;
    }

    Index(int i)
    {
        count = i;
    }

    Index operator++()
    {
        ++count;
        return ++count;
    }

    Index operator++(int)
    {
        
        count++;
        return count++;
    }
    void showdata()
    {
        cout << count << endl;
    }
};
int main()
{
    Index c, d, e, f;
    cout << "C = ";
    c.showdata();
    d = ++c;
    cout << "C = ";
    c.showdata();
    cout << "D = ";
    d.showdata();

    cout << "E = ";
    e.showdata();
    f = e++;
    cout << "E = ";
    e.showdata();
    cout << "f = ";
    f.showdata();

    return 0;
}