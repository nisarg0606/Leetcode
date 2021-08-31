#include<bits/stdc++.h>
using namespace std;

#define ll long long int

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int a = nums[n-1]*nums[n-2]*nums[n-3];
        int b = nums[0]*nums[1]*nums[n-1];
        return max(a, b);
    }
};

int main() {
    Solution s;
    vector<int> nums = {-1,-2,-3};
    cout<<s.maximumProduct(nums)<<endl;
    return 0;
}