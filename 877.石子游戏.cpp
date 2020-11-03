/*
 * @lc app=leetcode.cn id=877 lang=cpp
 *
 * [877] 石子游戏
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        // dp[i][j]代表（i,j)的时两个选的差
        vector<vector<int>> dp(piles.size()+1,vector<int>(piles.size()+1,0));
        for(int i=0;i<piles.size();i++){
            dp[i][i]=piles[i];
        }
        for(int i=piles.size()-2;i>=0;i--){
            for(int j=i+1;j<piles.size();j++){
                dp[i][j]=max(piles[i]-dp[i+1][j],piles[j]-dp[i][j-1]);
            }
        }
        return dp[0][piles.size()-1]>0;
    }
};
// @lc code=end

