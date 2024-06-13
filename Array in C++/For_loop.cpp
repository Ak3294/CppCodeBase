#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 34, 32, 12};
    cout << "This are Marks :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is :" << marks[i] << endl;
    }

    return 0;
}