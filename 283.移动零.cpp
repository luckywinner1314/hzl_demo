/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // for(int i=nums.size()-1;i>=0;i--)
        // {
        //     if(nums[i]==0)
        //     {
        //         for(int j=i;j<nums.size()-1&&nums[j+1]!=0;j++)
        //         {
        //             int temp=nums[j+1];
        //             nums[j+1]=nums[j];
        //             nums[j]=temp;
        //         }
        //     }
        // }
        int not_zero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0) nums[not_zero++]=nums[i];
        }
        for(int i=not_zero;i<nums.size();i++)
        {
            nums[i]=0;
        }

    }
};
// @lc code=end

