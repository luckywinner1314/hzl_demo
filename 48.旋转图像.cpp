/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n<2) return;
        int num[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                num[i][j]=matrix[n-1-j][i];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            matrix[i][j]=num[i][j];
        }
        return;


        
    }
};
// @lc code=end

