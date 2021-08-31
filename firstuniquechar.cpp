#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        int cnt[26]={0};
        for(int i=0;i<n;i++)
        {
            cnt[s[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            if(cnt[s[i]-'a']==1)
            {
                return i;
            }
        }
        return -1;
    }
};    
int main()
{
    Solution s;
    string str="leetcode";
    cout<<s.firstUniqChar(str)<<endl;
    str = "loveleetcode";
    cout<<s.firstUniqChar(str)<<endl;
    return 0;
}