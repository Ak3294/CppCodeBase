#include <iostream>
using namespace std;
class User
{
private:
    int i;
    float f;
    char c;

public:
    void displayData()
    {
        cout << i << '\n'
             << f << "\n"
             << c << endl;
    }
};
int main()
{
    cout << sizeof(User) << endl;
    User u1;
    cout << sizeof(u1) << endl;
    u1.displayData();
    return 0;
}

/// int ram = new int;
// int *ram = 23;

// Sample *p;
// Sample p = new Sample();