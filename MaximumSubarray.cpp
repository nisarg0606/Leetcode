#include<bits/stdc++.h>
using namespace std;

#define ll long long int

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = nums[0];
        int curr_sum = nums[0];
        for(int i=1;i<n;i++){
            curr_sum = max(nums[i], curr_sum+nums[i]);
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<s.maxSubArray(nums);
    return 0;
}