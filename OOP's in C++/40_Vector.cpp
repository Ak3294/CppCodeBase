// Vector is Inbuild Dynamic Array
// Properties of Vector
// 1. Do not give the size of array at front.
// 2. Double the size when it is filled.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> *vp = new vector<int>(); // Dynamic
    vector<int> v;                       // Static

    // How to createb a vector of given size
    vector<int> v2(10, -2); // Initialize with -2

    // sort the vector
    sort(v2.begin(), v2.end());

    for (int i = 0; i < 100; i++)
    {
        v.push_back(i + 1);
        cout << "Size :" << v.size() << endl;         // 1 ,2,3,4,5,......100
        cout << "Capacity :" << v.capacity() << endl; // 1,2,4,4,8,8,8,8,16.....
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    /*
        // Element inside the vector
        v.push_back(5);
        v.push_back(10);
        v.push_back(20);

        // This type of declartion not double the size when array is filled.
        // Never use [] to insert element
        // v[1] = 100;
        // v[3] = 200;
        // v[4] = 400;

        v.push_back(23);
        v.push_back(234);

        for (int i = 0; i < v.size(); i++)
        {
            cout << v.at(i) << endl;
        }

        v.pop_back();  // Delete the last element

        // This is Valid Syntex because this syntex avoid vacent position.
        cout << v.at(0) << endl;
        cout << v.at(1) << endl;
        cout << v.at(2) << endl;
        cout << v.at(3) << endl;
        cout << v.at(4) << endl;
        cout << v.at(5) << endl;

        // This syntex give garbage value at vacent position

        cout << v[0] << endl
             << v[1] << endl
             << v[2] << endl
             << v[3] << endl
             << v[4] << endl
             << v[5] << endl
             << v[6] << endl;
    */
    return 0;
}