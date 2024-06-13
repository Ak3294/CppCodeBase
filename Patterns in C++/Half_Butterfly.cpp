// Find a peak element which is not smaller than its neighbours

#include<bits/stdc++.h>
using namespace std;

void FindPeakElement(int arr[],int size){
    if(size<=2){
        cout<<"-1";
    }
    for(int i=1;i<size-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            cout<<arr[i];
        }
    }
}
int main(){

    int arr[]= {10, 20, 15, 2, 23, 90, 67};
    int size = sizeof(arr)/sizeof(arr[0]);

    FindPeakElement(arr,size);
}