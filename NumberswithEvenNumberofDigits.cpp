#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Solution{
    public:
        int findNumbers(vector<int>& nums) {
            int count = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (isEven(nums[i]))
                    count++;
            }
            return count;
        }
        bool isEven(int num) {
            int count = 0;
            while (num) {
                num /= 10;
                count++;
            }
            return count % 2 == 0;
        }
};

int main()
{
    Solution s;
    vector<int> nums = {12,345,2,6,7896};
    cout<<s.findNumbers(nums)<<endl;
    return 0;
}