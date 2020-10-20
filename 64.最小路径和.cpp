/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

// @lc code=start
// #include<bits/stdc++.h>
// using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid){
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),0));

        int m=grid.size(),n=grid[0].size();
        dp[0][0]=grid[0][0];
        for(int i=1;i<m;i++) dp[i][0]=dp[i-1][0]+grid[i][0];
        for(int i=1;i<n;i++) dp[0][i]=dp[0][i-1]+grid[0][i];

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];



    }
};
// @lc code=end

