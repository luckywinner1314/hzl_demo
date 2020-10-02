/*
 * @lc app=leetcode.cn id=661 lang=cpp
 *
 * [661] 图片平滑器
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int size=M.size();
        int size1=M[0].size();
        vector<vector<int>> ans(M);
        if(size1==0) return ans;
        if(size==1&&size1==1) return ans;

        if(size==1)
        {
            ans[0][0]=(M[0][0]+M[0][1])/2;
            ans[0][size1-1]=(M[0][size1-1]+M[0][size1-2])/2;
            for(int i=1;i<size1-1;i++)
            {
                ans[0][i]=(M[0][i-1]+M[0][i]+M[0][i+1])/3;
            }
            return ans;
        }
        if(size1==1)
        {
            ans[0][0]=(M[0][0]+M[1][0])/2;
            ans[size-1][0]=(M[size-1][0]+M[size-2][0])/2;
            for(int i=1;i<size-1;i++)
            {
                ans[i][0]=(M[i-1][0]+M[i][0]+M[i+1][0])/3;
            }
            return ans;
        }

        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size1;j++)
            {
                if(i==0)
                {
                    if(j==0)
                    {
                        ans[i][j]=(M[0][0]+M[i+1][j]+M[i][j+1]+M[i+1][j+1])/4;
                    }
                    else if(j==size1-1)
                    {
                        ans[i][j]=(M[i][j]+M[i][j-1]+M[i+1][j]+M[i+1][j-1])/4;
                    }
                    else
                        ans[i][j]=(M[i][j]+M[i][j-1]+M[i][j+1]+M[i+1][j-1]+M[i+1][j]+M[i+1][j+1])/6;
                }
                else if(i==size-1)
                {
                    if(j==0)
                    {
                        ans[i][j]=(M[i][j]+M[i-1][j]+M[i][j+1]+M[i-1][j+1])/4;
                    }
                    else if(j==size1-1)
                    {
                        ans[i][j]=(M[i][j]+M[i][j-1]+M[i-1][j]+M[i-1][j-1])/4;
                    }
                    else
                        ans[i][j]=(M[i][j]+M[i][j-1]+M[i][j+1]+M[i-1][j-1]+M[i-1][j]+M[i-1][j+1])/6;
                }
                else if(j==0&&i!=0&&i!=size-1)
                {
                    ans[i][j]=(M[i][j]+M[i-1][j]+M[i+1][j]+M[i-1][j+1]+M[i][j+1]+M[i+1][j+1])/6;
                }
                else if(j==size1-1&&i!=0&&i!=size-1)
                {
                     ans[i][j]=(M[i][j]+M[i-1][j]+M[i+1][j]+M[i-1][j-1]+M[i][j-1]+M[i+1][j-1])/6;
                }
                else
                {
                     ans[i][j]=(M[i][j]+M[i-1][j]+M[i+1][j]+M[i-1][j+1]+M[i][j+1]+M[i+1][j+1]+M[i-1][j-1]+M[i][j-1]+M[i+1][j-1])/9;
                }                
            }
        }

        return ans;
    }
};

// @lc code=end

