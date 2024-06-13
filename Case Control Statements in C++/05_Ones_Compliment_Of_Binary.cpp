#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void OnesComplimentOfBinary()
    {
        cout << "Enter the binary number:" << endl;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "Incorrect binary format" << endl;
                exit(0);
            }
        }

        cout << "Convert into Ones Compliment...." << endl;
        cout << "Ones Compliment is :";
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) == '1';
            }
            else
            {
                s.at(i) == '0';
            }
        }
        for(int i=0;i<s.length();i++){
            cout<<s.at(i);
        }

    }
};
int main()
{
    binary b;
    b.OnesComplimentOfBinary();
    return 0;
}