/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;//要置为零的行
        vector<int> colunn;//要置为零的列
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row.emplace_back(i);
                    colunn.emplace_back(j);
                }
            }
        }
        for(int i=0;i<row.size();i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[row[i]][j]=0;
            }
        }
        for(int i=0;i<colunn.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                matrix[j][colunn[i]]=0;
            }
        }
        return;
    }
};
// @lc code=end

