/*
 * @lc app=leetcode.cn id=274 lang=cpp
 *
 * [274] H 指数
 */

// @lc code=start
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int size=citations.size();
        int ans=0;
        for(int i=0;i<size;i++)
        {
            if(citations[i]>=(size-i))
            {
                ans=size-i;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

