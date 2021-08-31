#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();   
        vector<int> ans;
        if(n==0)
            return ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }
        nums.insert(nums.end(),ans.begin(),ans.end());
        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    cout<<"The concatenated array is: ";
    for(int i=0;i<s.getConcatenation(nums).size();i++)
    {
        cout<<s.getConcatenation(nums)[i]<<" ";
    }
    cout<<endl;
    return 0;
}