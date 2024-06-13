#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 4, 5, 7, 8,4,2,4,2,1};
    int n = nums.size();
    vector<int> output(n, 1); // Initialize output with size and default value 1

    for (int i = 0; i < n; i++)
    {
        int leftSum = 1, rightSum = 1; // Reset leftSum and rightSum for each element

        // Calculate left product
        for (int p = 0; p < i; p++)
        {
            leftSum *= nums[p];
        }

        // Calculate right product
        for (int q = i + 1; q < n; q++)
        {
            rightSum *= nums[q];
        }

        // Multiply left and right products and store in output
        output[i] = leftSum * rightSum;
    }

    // Print output
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }
    return 0;
}
