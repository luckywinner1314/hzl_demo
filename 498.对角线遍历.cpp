/*
 * @lc app=leetcode.cn id=498 lang=cpp
 *
 * [498] 对角线遍历
 */

// @lc code=start
class Solution {
public:
    vector<int> path;
    void go_path(vector<vector<int>>& matrix,int x,int y)
    {
        if(matrix[x][y]==INT_MIN) return;
        if(matrix.size()==0) return;
        int m=matrix.size(),n=matrix[0].size();

        // 当前加入路径并标记
        path.emplace_back(matrix[x][y]);
        matrix[x][y]=INT_MIN;

        // 往右上
        while(x-1>=0&&y+1<n)
        {
            x--;
            y++;
            path.emplace_back(matrix[x][y]);
            matrix[x][y]=INT_MIN;
        }
        if(y+1<n) y++;
        else if(x+1<m) x++;
        else return;
        // 往左下
        path.emplace_back(matrix[x][y]);
        matrix[x][y]=INT_MIN;
        while(x+1<m&&y-1>=0)
        {
            x++;
            y--;
            path.emplace_back(matrix[x][y]);
            matrix[x][y]=INT_MIN;
        }
        if(x+1<m) x++;
        else if(y+1<n) y++;
        else return;
        go_path(matrix,x,y);
        return;
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        path.clear();
        if(matrix.size()==0) return path;
        go_path(matrix,0,0);
        return path;
    }
};
// @lc code=end

