#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // vector are work as a last size fill than size will be double
    vector<int> *vp = new vector<int>(); //Dynamic Allocation
    vector<int> v;                       //Static Allocation

    vector<int> v2(5, 23);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }

    sort(v2.begin(), v2.end());

    /*
    vector<int> v1(10); // giving size is optional
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }


    */

    /*
    // push_back function are used to insert the element in vector
    v.push_back(10);
    v.push_back(113);
    v.push_back(11);
    v.push_back(13);

    v[1] = 65;
    // never use [] to insert elements
    // at() function are better than []

    v[5] = 121;
    v.push_back(23);
    v.push_back(231);

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    for (int i = 0; i < v.size(); i++)
    {
    }
    // at() function are check the range of element
    // cout<<v.at(4)<<endl; // this element is in range
    // cout<<v.at(8)<<endl;  // this element is out of range
    // cout << " " << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << " "
    //  << v[5] << " " << v[6] << endl;

    */

    /*
    //    size : states that How many element are present in the vector Array.
    //    Capacity:How many element you can insert in the Vector array

    for (int i = 0; i < 100; i++)
    {
        cout << "Capacity :" << v.capacity() << endl;

        cout << v.size();
        v.push_back(i + 1);
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }


    */
}
