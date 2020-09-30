/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m=nums.size();
        int n=nums[0].size();
        if(m*n!=r*c) return nums;
        vector<vector<int>> ans;
        vector<int> path;
        int a[m*n];
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                a[count++]=nums[i][j];
        }
        count=0;
        for(int i=0;i<r;i++)
        {
            path.clear();
            for(int j=0;j<c;j++)
            {
                path.emplace_back(a[count++]);
            }
            ans.emplace_back(path);
        }
        return ans;

    }
};
// @lc code=end

