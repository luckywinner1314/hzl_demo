/*
 * @lc app=leetcode.cn id=453 lang=cpp
 *
 * [453] 最小移动次数使数组元素相等
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int size=nums.size();
        int min_id=0;
        for(int i=0;i<size;i++)
        {
            if(nums[i]<nums[min_id]) min_id=i;
        }
        for(int i=0;i<size;i++)
        {
            ans+=(nums[i]-nums[min_id]);
        }
        return ans;

    }
};
// @lc code=end

