/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int pre,max,now;
        pre=nums[0];
        max=pre;
        for(int i=1;i<n;i++){
            now=(0>pre?0:pre)+nums[i];
            max=max>now?max:now;
            pre=now;
        }
        return max;
    }
};
// @lc code=end

