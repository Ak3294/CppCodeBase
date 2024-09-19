#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 8, 3, 4};
    int n = nums.size();
    vector<int> output(n);
    // left to right iteration
    output[0] = 1;
    for (int i = 1; i < n; i++)
    {
        output[i] = output[i - 1] * nums[i - 1];
    }
    // right to left iteration
    int right = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        output[i] *= right;
        right *= nums[i];
    }
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
}
