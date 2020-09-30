/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> path;
        path.emplace_back(1);
        vector<vector<int>> ans;
        if(numRows==0) return ans;
        ans.emplace_back(path);
        for(int j=1;j<numRows;j++)
        {
            vector<int> row(path);
            path.clear();
            path.emplace_back(row[0]);
            for(int i=0;i<row.size()-1;i++)
            {
                path.emplace_back(row[i]+row[i+1]);
            }
            path.emplace_back(1);
            ans.emplace_back(path);
        }
        return ans;

    }
};
// @lc code=end

