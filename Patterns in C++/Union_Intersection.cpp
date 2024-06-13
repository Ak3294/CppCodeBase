#include<bits/stdc++.h>
using namespace std;

void FindUnion(int arr1[],int arr2[],int m, int n){
     set<int>s;
     for(int i=0;i<m;i++){
        s.insert(arr1[i]);
     }

     for(int j=0;j<n;j++){
        s.insert(arr2[j]);
     }

     vector<int>Union(s.begin(),s.end());

     for(int k=0;k<Union.size();k++){
        cout<<Union[k]<<" ";
     }
}

void FindIntersection(int arr1[], int arr2[], int m, int n){
    int i=0,j=0;

    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}

int main(){
      int arr1[]={1,2,4,6,8,10};
      int arr2[]={1,3,5,6,8,9};

      int m = sizeof(arr1)/sizeof(arr1[0]);
      int n = sizeof(arr2)/sizeof(arr2[0]);

      cout<<"Union of the Arrays is :";
      FindUnion(arr1,arr2,m,n);

      cout<<"\nIntersection of the arrays is :";
      FindIntersection(arr1,arr2,m,n);

      return 0;
}