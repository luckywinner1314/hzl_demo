/*
 * @lc app=leetcode.cn id=598 lang=cpp
 *
 * [598] 范围求和 II
 */

// @lc code=start
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int x=99999,y=99999;

        if(ops.size()==0) return m*n;
        for(int i=0;i<ops.size();i++)
        {
            x=x<ops[i][0]?x:ops[i][0];
            y=y<ops[i][1]?y:ops[i][1];
        }
        return x*y;
    }
};
// @lc code=end

