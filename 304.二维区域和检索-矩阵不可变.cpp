/*
 * @lc app=leetcode.cn id=304 lang=cpp
 *
 * [304] 二维区域和检索 - 矩阵不可变
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class NumMatrix {
public:
    vector<vector<int>> sum_row;
    vector<int> path;
    NumMatrix(vector<vector<int>>& matrix) {
        // sum_row=matrix;
        if(matrix.size()==0){}
        else
        {
            int m=matrix.size(),n=matrix[0].size();
            for(int i=0;i<m;i++)
            {
                path.clear();
                path.emplace_back(matrix[i][0]);
                for(int j=1;j<n;j++)
                {
                    path.emplace_back(path[j-1]+matrix[i][j]);
                }
                sum_row.emplace_back(path);
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        if(sum_row.size()==0) return sum;
        // for(int i=row1;i<=row2;i++)
        // {
        //     for(int j=col1;j<=col2;j++)
        //         sum+=sum_row[i][j];
        // }
        // return sum;
        for(int i=row1;i<=row2;i++)
        {
            if(col1==0) sum+=sum_row[i][col2];
            else sum+=sum_row[i][col2]-sum_row[i][col1-1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
// @lc code=end

