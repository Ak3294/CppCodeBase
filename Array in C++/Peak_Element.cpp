#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> nums)
{
    if (nums.size() == 1)
        return 0;
    if (nums[0] > nums[1] && nums.size() == 2)
        return 0;
    if (nums[1] > nums[0] && nums.size() == 2)
        return 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i + 1] < nums[i] && nums[i - 1] < nums[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int index = findPeakElement(nums);
    cout << index;
}