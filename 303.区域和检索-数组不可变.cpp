/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class NumArray {
public:
    vector<int> data;
    NumArray(vector<int>& nums) {
        if(nums.size()==0) {}
        else{
        data.emplace_back(nums[0]);
        for(int i=1;i<nums.size();i++)
            data.emplace_back(data[i-1]+nums[i]);
        }
    }
    
    int sumRange(int i, int j) {
        if(data.size()==0) return 0;
        if(i==0) return data[j];
        return data[j]-data[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end

