// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // Take the Input of the Array
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute: Initialize the  hash in which store the count of every element.
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] += 1;
//     }

//     // Take Input of the Number of Queries
//     int q;
//     cin >> q;

//     // print the Quries count in the hash.
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << hash[number] << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter the Input String: ";
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    //precompute:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }
    cout<<"Find the Count of Characters-How many time You Search for the Collection(INPUT-int):";
    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        c=tolower(c);
        // fetch:
        cout << c<<" is present in the string "<<hash[c - 'a']<<" times." << endl;
    }
    return 0;
}
