/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit=0;
        vector<int> dp(n,0);

        int min=INT_MAX;
        for(int i=0;i<n;i++){
            min=min>prices[i]?prices[i]:min;
            dp[i]=prices[i]-min;
        }

        for(int i=0;i<n;i++){
            max_profit=max_profit<dp[i]?dp[i]:max_profit;
        }
        return max_profit;
    }
};
// @lc code=end

