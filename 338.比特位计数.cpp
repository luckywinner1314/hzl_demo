/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1,0);
        
        dp[0]=0;
        if(num==0) return dp;
        dp[1]=1;
        if(num==1) return dp;
        dp[2]=1;

        for(int i=3;i<num+1;i++){
            if(log2(i)-(int)log2(i)==0){
                dp[i]=1;
            }
            else{
                dp[i]=dp[i/2]+dp[i%2];
            }

        }
        return dp;

    }
};
// @lc code=end

