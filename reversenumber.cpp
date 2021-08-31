#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    int reverse(int x) {
        int  res = 0;
        while (x!=0){
            if (res > INT_MAX/10 || res < INT_MIN/10){
                return 0;
            }
            res = res*10+ x%10;
            x= x/10;
        }
        return res;
    }
};

int main()
{
    Solution s;
    int x=123;
    cout<<s.reverse(x)<<endl;
    x = -123;
    cout<<s.reverse(x)<<endl;
    x = 120;
    cout<<s.reverse(x)<<endl;
    return 0;
}