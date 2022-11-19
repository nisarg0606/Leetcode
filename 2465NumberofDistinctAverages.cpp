#include <bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        set<double> s;
        // sort the vector
        sort(nums.begin(), nums.end());
        while(nums.size() > 0)
        {
            // do average of first and last element
            s.insert((nums[0] + nums[nums.size() - 1]) / 2.0);
            // remove first and last element
            nums.erase(nums.begin());
            nums.pop_back();
        }
        return s.size();
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // cout << s.distinctAverages(v) << endl;
    // v = {5, 4, 6, 2, 10, 20, 100};
    // cout << s.distinctAverages(v) << endl;
    v = {4, 1, 4, 0, 3, 5};
    cout << s.distinctAverages(v) << endl;
    v = {1, 100};
    cout << s.distinctAverages(v) << endl;
    return 0;
}
