/*
 * @lc app=leetcode.cn id=419 lang=cpp
 *
 * [419] 甲板上的战舰
 */

// @lc code=start
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int x=board.size();
        int y=board[0].size();
        int ans=0;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                // if(board[i][j]=='X')
                // {
                //     ans++;
                //     board[i][j]='.';
                //     int x1=i+1,y1=j+1;
                //     while(y1<y&&board[i][y1]=='X')
                //     {
                //         board[i][y1++]='.';
                //     }
                //     while(x1<x&&board[x1][j]=='X')
                //     {
                //         board[x1][j]='.';
                //         x1++;
                //     }
                // }
                if(board[i][j]=='.') continue;
                if(i>0&&board[i-1][j]=='X') continue;
                if (j>0&&board[i][j-1]=='X') continue;
                ans++;
            }
        }
        return ans;

    }
};
// @lc code=end

