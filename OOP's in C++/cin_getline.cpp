//#Approved By Akshay
#include <iostream>
using namespace std;

int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[100];
    cout << "Enter the Characters" << endl;
    // cin.getline(name, 100); //cin.getline are used to print string with spaces
    cin.getline(name, 100, 's');
    cout << "Your Name is :" << name << endl;
    cout << length(name);
    return 0;
}