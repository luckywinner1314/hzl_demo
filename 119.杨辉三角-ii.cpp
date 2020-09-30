/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> path;
        
        path.emplace_back(1);
        if(rowIndex==0) return path;
        for(int i=1;i<rowIndex+1;i++)
        {
            vector<int> row(path);
            path.clear();
            path.emplace_back(row[0]);
            for(int j=0;j<row.size()-1;j++)
            {
                path.emplace_back(row[j]+row[j+1]);
            }
            path.emplace_back(1);
        }
        return path;
    }
};
// @lc code=end

