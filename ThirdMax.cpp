#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return -1;
        if(n == 1)
            return nums[0];
        if(n == 2)
            return max(nums[0], nums[1]);
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] > max2 && nums[i] != max1)
            {
                max3 = max2;
                max2 = nums[i];
            }
            else if(nums[i] > max3 && nums[i] != max1 && nums[i] != max2)
                max3 = nums[i];
        }
        if(max3 == INT_MIN)
            return max1;
        return max3;
    }
};     // Time Complexity: O(n)
        // Space Complexity: O(1)

        // Method 2:
        // Time Complexity: O(n)
        // Space Complexity: O(1)
class Solution1 {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return -1;
        if(n == 1)
            return nums[0];
        if(n == 2)
            return max(nums[0], nums[1]);
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] > max2 && nums[i] != max1)
            {
                max3 = max2;
                max2 = nums[i];
            }
            else if(nums[i] > max3 && nums[i] != max1 && nums[i] != max2)
                max3 = nums[i];
        }
        if(max3 == INT_MIN)
            return max1;
        return max3;
    }
};


int main()
{
    Solution s;
    vector<int> nums = {2,2,3,1};
    cout<<s.thirdMax(nums)<<endl;
    Solution1 s1;
    cout<<s1.thirdMax(nums)<<endl; 
    return 0;
}