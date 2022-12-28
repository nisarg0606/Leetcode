#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        int ans = -1;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it->first == it->second) {
                ans = max(ans, it->first);
            }
        }
        return ans;
    }

};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution obj;
    cout << obj.findLucky(arr) << endl;
    return 0;
}