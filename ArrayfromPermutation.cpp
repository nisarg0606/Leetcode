#include <bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        int i = 1;
        int j = 1;
        while (i <= n)
        {
            ans.push_back(i);
            if (i == j)
            {
                j++;
                i++;
            }
            else
            {
                ans.push_back(nums[i - 1]);
                i++;
            }
        }
        return ans;      
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0,2,1,5,3,4};
    vector<int> ans = s.buildArray(nums);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}