#include<bits/stdc++.h>
using namespace std;

#define ll long long int

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                ans.push_back(m[nums[i]]);
                ans.push_back(i);
                return ans;
            }
            m[target - nums[i]] = i;
        }
        return ans;
    }
};


int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = s.twoSum(nums, target);
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}