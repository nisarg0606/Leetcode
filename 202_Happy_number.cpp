#include <bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution
{
public:
    int totalSum(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            int temp = n % 10;
            sum += temp * temp;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n)
    {
        unordered_set<int> s;
        while (n != 1)
        {
            n = totalSum(n);
            if (s.find(n) != s.end())
                return false;
            s.insert(n);
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.isHappy(19) << endl;
    cout << s.isHappy(2) << endl;

    return 0;
}
