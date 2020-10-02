/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int n=strs.size();
        if(n==0) return ans;
        int min_length=999999;

        for(int i=0;i<n;i++)
        {
            if(strs[i].size()<min_length) min_length=strs[i].size();
        }

        for(int i=0;i<min_length;i++)
        {
            bool temp=true;
            for(int j=1;j<n;j++)
            {
                if(strs[j][i]!=strs[j-1][i]) temp=false; 
            }
            if(temp==false) break;
            ans+=strs[0][i];
        }

        return ans;



    }
};
// @lc code=end

