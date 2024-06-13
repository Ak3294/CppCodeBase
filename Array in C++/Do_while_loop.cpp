#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 34, 32, 12};
    cout << "This are Marks" << endl;
    int i = 0;
    do
    {
        cout << marks[i] << endl;
        i++;
    } while (i < 4);
    return 0;
}