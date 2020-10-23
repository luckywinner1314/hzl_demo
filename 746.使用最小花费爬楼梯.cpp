/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()<2) return 0;
        // vector<int> dp(cost.size()+1,0);
        // dp[0]=0;
        // dp[1]=0;
        // for(int i=2;i<cost.size()+1;i++){
        //     dp[i]=dp[i-2]+cost[i-2]<dp[i-1]+cost[i-1]?dp[i-2]+cost[i-2]:dp[i-1]+cost[i-1];
        // }
        // return dp[cost.size()];
        int pre2=0,pre1=0;
        int ans;
        for(int i=2;i<cost.size()+1;i++){
            ans=pre2+cost[i-2]<pre1+cost[i-1]?pre2+cost[i-2]:pre1+cost[i-1];
            pre2=pre1;
            pre1=ans;
        }
        return ans;

    }
};
// @lc code=end

