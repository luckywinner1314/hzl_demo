/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int size=nums.size();
        int hashnums[size+1];
        for(int i=1;i<size+1;i++) hashnums[i]=0;
        for(int i=0;i<size;i++)
        {
            hashnums[nums[i]]++;
        }
        int leave;
        for(int i=1;i<size+1;i++)
        {
            if(hashnums[i]==0) leave=i;
            if(hashnums[i]==2)
            {
                ans.emplace_back(i);
            }
        }
        ans.emplace_back(leave);
        return ans;
    }
};
// @lc code=end

