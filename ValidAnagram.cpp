#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int count[26]={0};
        for(int i=0;i<s.length();i++)
            count[s[i]-'a']++;
        for(int i=0;i<t.length();i++)
            count[t[i]-'a']--;
        for(int i=0;i<26;i++)
            if(count[i]!=0)
                return false;
        return true;      
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution s;
    string s1,s2;
    cin>>s1>>s2;
    cout<<s.isAnagram(s1,s2);
    return 0;
}