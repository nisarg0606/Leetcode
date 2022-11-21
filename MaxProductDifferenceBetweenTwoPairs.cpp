#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1 = *max_element(nums.begin(), nums.end());
        nums.erase(max_element(nums.begin(), nums.end()));
        int max2 = *max_element(nums.begin(), nums.end());
        nums.erase(max_element(nums.begin(), nums.end()));
        int min1 = *min_element(nums.begin(), nums.end());
        nums.erase(min_element(nums.begin(), nums.end()));
        int min2 = *min_element(nums.begin(), nums.end());
        nums.erase(min_element(nums.begin(), nums.end()));
        return (max1 * max2) - (min1 * min2);
    }
};