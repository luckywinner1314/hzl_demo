/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int max=nums[size-1]*nums[size-2]*nums[size-3];
        int a=nums[0]*nums[1]*nums[size-1];
        return a>max?a:max;
        

    }
};
// @lc code=end

