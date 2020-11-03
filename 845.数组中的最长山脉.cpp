/*
 * @lc app=leetcode.cn id=845 lang=cpp
 *
 * [845] 数组中的最长山脉
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMountain(vector<int>& A) {
        if(A.size()<3) return 0;
        // 以i为结尾的连续上升最张子序列为continue_rise[i];
        vector<int> continue_rise(A.size()+1,0);
        // 以i为来头的连续下降子序列continue_down[i]
        vector<int> continue_down(A.size()+1,0);
        continue_rise[0]=1;
        continue_down[A.size()-1]=1;
        for(int i=1;i<A.size();i++){
            continue_rise[i]=A[i]>A[i-1]?continue_rise[i-1]+1:1;
        }
        for(int i=A.size()-2;i>=0;i--){
            continue_down[i]=A[i]>A[i+1]?continue_down[i+1]+1:1;
        }
        int max=-1;
        for(int i=0;i<A.size();i++){
            if(continue_rise[i]>1&&continue_down[i]>1)
            max=max<continue_down[i]+continue_rise[i]-1?continue_down[i]+continue_rise[i]-1:max;
        }
        return max>=3?max:0;
    }
};
// @lc code=end

