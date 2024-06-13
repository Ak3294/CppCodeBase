#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }
};

int main()
{
    Solution s;
    vector<int>nums={-100,-98,-1,2,3,4};
    s.maximumProduct(nums);
}