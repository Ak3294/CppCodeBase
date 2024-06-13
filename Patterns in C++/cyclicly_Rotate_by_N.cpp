#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int>res;
//     int arr[] = {1,2,34,45,56};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int N;
//     cout<<"How many Positions are you rotate the array:";
//     cin>>N;
//     N = N%size;

//     for(int i=size-N;i<size;i++){
//         res.push_back(arr[i]);
//     }
//     for(int j=0;j<size-N;j++){
//         res.push_back(arr[j]);
//     }

//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
// }


void Reverse(vector<int> &arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    vector<int> vec = {1, 2, 34, 45, 56};
    int n;
    cin >> n;
    int size = vec.size();
    n = n % size;

    // Step 1: Reverse the last n elements
    Reverse(vec, size - n, size - 1);

    // Step 2: Reverse the first size - n elements
    Reverse(vec, 0, size - n - 1);

    // Step 3: Reverse the entire array
    Reverse(vec, 0, size - 1);

    // Print the rotated array
    for (int i = 0; i < size; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
