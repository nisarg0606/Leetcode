#include <bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string c = s;
        reverse(c.begin(), c.end());
        return s == c;
    }

    int maxPalindrome(string s, int k)
    {
        int n = s.length();
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            string str;
            for (int j = i; j < n; j++)
            {
                str += s[j];
                if (str.size() > k + 1)
                    break;
                if (str.size() >= k && isPalindrome(str))
                {
                    count++;
                    i = j;
                    break;
                }
            }
        }
        return count;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.maxPalindrome("aabaa", 2) << endl;
    cout << s.maxPalindrome("abaccdbbd", 3) << endl;
    cout << s.maxPalindrome("adbcda", 2) << endl;
    return 0;
}
