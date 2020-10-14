/*
 * @lc app=leetcode.cn id=416 lang=cpp
 *
 * [416] 分割等和子集
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {

public:

    bool canPartition(vector<int>& nums) {
        int sum=0,sum_half;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        sum_half=sum/2;
        if(sum%2!=0||sum_half<nums[nums.size()-1]) return false;
        if(nums[nums.size()-1]==sum_half) return true;


        sum_half=sum_half-nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<=sum_half)
            {
                int temp=sum_half;
                temp-=nums[i];
                if(temp==0) return true;
                for(int j=i-1;j>=0;j--)
                {
                    if(nums[j]<=temp){
                        temp-=nums[j];
                        if(temp==0) return true;
                    }
                }
            }
        }


        return false;
        



    }
};
// @lc code=end

