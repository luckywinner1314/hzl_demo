/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<int> path;
    // vector<vector<int>> ans;
    void go_path(vector<vector<int>>& matrix,int x,int y,int count)
    {
        int m=matrix.size();
        if(count>m*m) return ;
        if(m==0) return ;
        if(matrix[x][y]!=0) return ;
        if(x==m||y==m) return ;
        // 往右走
        int is_right=0;//判断是否进了循环里面
        for(;y<m&&x<m&&matrix[x][y]==0;y++)
        {
            is_right=1;
            matrix[x][y]=count++;
        }
        y-=is_right;
        //往下走
        if(x<m-1) x=x+1;
        int is_down=0;//判断是否进了循环里面
        for(;x<m&&y<m&&matrix[x][y]==0;x++)
        {
            is_down=1;
            matrix[x][y]=count++;
        }
        x-=is_down;
        if(y>0) y=y-1;
        int is_left=0;
        for(;y>=0&&x>=0&&matrix[x][y]==0;y--)
        {
            is_left=1;
            matrix[x][y]=count++;
        }
        y+=is_left;
        if(x>0) x=x-1;
        int is_up=0;
        for(;x>=0&&y>=0&&matrix[x][y]==0;x--)
        {
            is_up=1;
            matrix[x][y]=count++;
        }
        x+=is_up;
        if(y<m-1) y=y+1;
        if(y<m&&matrix[x][y]==0)
            go_path(matrix,x,y,count);
        return ;
    }
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix;
        if(n==0) return matrix;
        int num[n][n];
        for(int i=0;i<n;i++)
        {
            path.clear();
            for(int j=0;j<n;j++)
            {
                path.emplace_back(0);
            }
            matrix.emplace_back(path);
            path.clear();
        }
        go_path(matrix,0,0,1);
        return matrix;




    }
};
// @lc code=end

