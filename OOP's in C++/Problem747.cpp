#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        vector<int> vec = nums;
        int i;
        sort(vec.begin(), vec.end(), greater<int>());
        bool ans = vec[0] >= (2 * vec[1]);
        if (ans == true)
        {
            for (i = 0; i < nums.size(); i++)
            {
                if (vec[0] == nums[i])
                    break;
            }
            return i;
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {3, 6, 1, 0};
    int indexs = s.dominantIndex(nums);
    cout<<indexs<<endl;
}