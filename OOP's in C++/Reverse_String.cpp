#include <iostream>
using namespace std;

int length(char name[])  // Count Length 
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void Reverse(char name[])  //Reverse the string
{
    int start = 0;
    int end = length(name) - 1;

    while (start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main()
{
    char name[30];
    cout << "Enter the Name :";
    cin.getline(name, 30);
    cout << "Your Name is :" << name << endl;

    Reverse(name);
    cout << "Reversed String is :" << name << endl;

    return 0;
}
