#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int carry = 1;
        for (int i = len - 1; i >= 0; i--) {
            int temp = digits[i] + carry;
            digits[i] = temp % 10;
            carry = temp / 10;
        }
        if (carry) {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};        

int main() {
    Solution s;
    vector<int> digits = {1, 2, 34};
    vector<int> result = s.plusOne(digits);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    digits = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    result = s.plusOne(digits);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}