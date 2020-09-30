/*
 * @lc app=leetcode.cn id=495 lang=cpp
 *
 * [495] 提莫攻击
 */

// @lc code=start
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int result=0;
        if(timeSeries.size()==0) return 0;
        for(int i=0;i<timeSeries.size()-1;i++)
        {
            if(timeSeries[i+1]-timeSeries[i]<duration)
            {
                result+=(timeSeries[i+1]-timeSeries[i]);
            }
            else result+=duration;
        }
        result+=duration;
        return result;
    }
};
// @lc code=end

