/*
// string are used as a datatype
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string a = "Akshay";
    cout << a << endl;

    string b = "Narendra";
    cout << b << endl;

    string *sp = new string;
    *sp = "Pankaj";
    cout << sp << endl;
    cout << *sp << endl;

    vector<string> v; //syntex of print multiple strings using vector
    v.push_back(a);
    v.push_back(b);
    v.push_back("Pawan");
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        sort(v[i].begin(), v[i].end()); // sort is a type of algorithm which is used to sort an algorithm
        cout << v[i] << endl;
    }

    return 0;
}

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    a = "AkshayisagoodBoy";
    vector<string> v;
    v.push_back(a); //using push_back Operation
    cout << a << endl;
    sort(a.begin(), a.end());
    cout << a << endl;

    string A;
    // cout << "Enter the Name :" << endl;
    // getline(cin, A);
    // cout << A << endl;
    A = "AkshayKumarHiran";
    cout << A[5] << endl;
    cout<<A.size()<<endl;
    cout<<A.length()<<endl;
    cout<<A.substr(5)<<endl;
    cout<<A.substr(5,5)<<endl;

    cout<<A.find("Kum")<<endl;

    int x=123;
    string y=to_string(x);
    cout<<y<<endl; // Now Integer is converted into string


    return 0;
}