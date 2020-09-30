/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */

// @lc code=start
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int time=0;
        for(int i=1;i<nums.size()&&time<2;i++)
        {
            if(nums[i]>=nums[i-1]) continue;
            time++;
            //突然有个数变小了
            if(i-2>=0&&nums[i]<nums[i-2]) nums[i]=nums[i-1];
            //突然有个数字变大了
            else nums[i-1]=nums[i];
        }

        return time<2;

    }
};
// @lc code=end

