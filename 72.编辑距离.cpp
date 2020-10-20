/*
 * @lc app=leetcode.cn id=72 lang=cpp
 *
 * [72] 编辑距离
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));

        if(n*m==0) return n+m;

        for(int i=0;i<n+1;i++){
            dp[i][0]=i;
        }
        for(int i=0;i<m+1;i++){
            dp[0][i]=i;
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                dp[i][j]=min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+(int)(word1[i-1]!=word2[j-1]));
            }
        }
        return dp[n][m];



        
    }
};
// @lc code=end

