/*
 * @lc app=leetcode.cn id=442 lang=cpp
 *
 * [442] 数组中重复的数据
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int> ans;
         int n=nums.size();
         for(int i=0;i<n;i++)
         {
             int temp=(nums[i]-1)%n;
             nums[temp]+=n;
         }
         for(int i=0;i<n;i++)
         {
             if(nums[i]>2*n) ans.emplace_back(i+1);
         }
         return ans;
    }
};
// @lc code=end

