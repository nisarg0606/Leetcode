#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    void reverseString(vector<char>& s) {
                int i=0,j=s.size()-1;
        while(i<j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};      

int main()
{
    Solution s;
    vector<char> v;
    v.push_back('h');
    v.push_back('e');
    v.push_back('l');
    v.push_back('l');
    v.push_back('o');
    s.reverseString(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    return 0;
}