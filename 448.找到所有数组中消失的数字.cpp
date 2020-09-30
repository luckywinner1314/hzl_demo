/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        // int size=nums.size();
        // int hash[size+1];
        // for(int i=0;i<size+1;i++) hash[i]=0;
        // for(int i=0;i<size;i++)
        // {
        //     hash[nums[i]]++;
        // }
        // for(int i=1;i<size+1;i++)
        // {
        //     if(hash[i]==0) ans.emplace_back(i);
        // }
        for(int i=0;i<nums.size();i++)
        {
            int temp;
            temp=nums[i]>0?nums[i]:nums[i]*(-1);
            if(nums[temp-1]>0) nums[temp-1]*=(-1);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) ans.emplace_back(i+1);
        }
        return ans;
    }
};
// @lc code=end

