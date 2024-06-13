#include<iostream>
using namespace std;

int main()
{
    int a[100];
    //Max-size of an Array is 10^5 to 10^6;
    cout<<a[13]; //Not Segmentation Fault
    cout<<a[1023]; // Segmentation Fault
}