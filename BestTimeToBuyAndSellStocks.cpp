#include<bits/stdc++.h>
using namespace std;

#define ll long long int

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0)
            return 0;
        int min_price = prices[0];
        int max_profit = 0;
        for(int i = 1; i < n; i++)
        {
            if(prices[i] < min_price)
                min_price = prices[i];
            else if(prices[i] - min_price > max_profit)
                max_profit = prices[i] - min_price;
        }
        return max_profit;        
    }
};

int main()
{
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<s.maxProfit(prices)<<endl;
    return 0;
}