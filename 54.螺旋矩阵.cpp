/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> path;
    void go_path(vector<vector<int>>& matrix,int x,int y)
    {
        int m=matrix.size(),n=matrix[0].size();
        if(m==0||n==0) return ;
        if(matrix[x][y]==INT_MIN) return ;
        if(x==m||y==n) return ;
        // 往右走
        int is_right=0;//判断是否进了循环里面
        for(;y<n&&x<m&&matrix[x][y]!=INT_MIN;y++)
        {
            is_right=1;
            path.emplace_back(matrix[x][y]);
            matrix[x][y]=INT_MIN;
        }
        y-=is_right;
        //往下走
        if(x<m-1) x=x+1;
        int is_down=0;//判断是否进了循环里面
        for(;x<m&&y<n&&matrix[x][y]!=INT_MIN;x++)
        {
            is_down=1;
            path.emplace_back(matrix[x][y]);
            matrix[x][y]=INT_MIN;
        }
        x-=is_down;
        if(y>0) y=y-1;
        int is_left=0;
        for(;y>=0&&x>=0&&matrix[x][y]!=INT_MIN;y--)
        {
            is_left=1;
            path.emplace_back(matrix[x][y]);
            matrix[x][y]=INT_MIN;
        }
        y+=is_left;
        if(x>0) x=x-1;
        int is_up=0;
        for(;x>=0&&y>=0&&matrix[x][y]!=INT_MIN;x--)
        {
            is_up=1;
            path.emplace_back(matrix[x][y]);
            matrix[x][y]=INT_MIN;
        }
        x+=is_up;
        if(y<n-1) y=y+1;
        if(y<n&&matrix[x][y]!=INT_MIN)
            go_path(matrix,x,y);
        return ;
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        if(matrix.size()==0) return path;
        go_path(matrix,0,0);
        
        return path;
    }
};
// @lc code=end

