#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    void sortColors(vector<int>& nums) {
                int n=nums.size();
        int left=0,right=n-1;
        int i=0;
        while(i<=right){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                left++;
                i++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[right]);
                right--;
            }
            else{
                i++;
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> v={2,0,2,1,1,0};
    s.sortColors(v);
    for(auto i:v)
        cout<<i<<" ";
    return 0;
}