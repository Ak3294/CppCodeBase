#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Fill file data.txt from 1 to 100
    ofstream fout("data.txt");
    if (!fout.is_open())
    {
        cout << "File is not exist!";
    }
    else
    {
        for (int i = 0; i <= 100; i++)
        {
            fout << ' ' << i;
        }
    }
    fout.close();
    // Open data.txt for reading anf fill odd.txt and even.txt
    ifstream in("data.txt", ios_base::in);
    ofstream oddOut("odd.txt");
    ofstream evenOut("even.txt");
    int num;
    while (in.good())
    {
        in >> num;
        if (num % 2 == 1)
        {
            oddOut << ' ' << num;
        }
        else
        {
            evenOut << ' ' << num;
        }
    }
    in.close();
    oddOut.close();
    evenOut.close();
    cout << "Content of data.txt:\n";
    ifstream ind("data.txt", ios_base::in);
    while (!ind.eof())
    {
        cout << (char)ind.get();
    }
    ind.close();
    cout << "\nContent of odd.txt:\n";
    ifstream inOdd("odd.txt", ios_base::in);
    while (!inOdd.eof())
    {
        cout << (char)inOdd.get();
    }
    inOdd.close();
    cout << "\nContent of even.txt:\n";
    ifstream inEven("even.txt", ios_base::in);
    while (!inEven.eof())
    {
        cout << (char)inEven.get();
    }
    inEven.close();
}