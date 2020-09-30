/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        int n=nums.size();
        left.emplace_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            left.emplace_back(left[i-1]*nums[i]);
        }
        left[n-1]=left[n-2];
        int r=nums[n-1];
        for(int i=n-2;i>0;i--)
        {
            left[i]=left[i-1]*r;
            r*=nums[i];
        }
        left[0]=r;
        return left;    
    }
};
// @lc code=end

