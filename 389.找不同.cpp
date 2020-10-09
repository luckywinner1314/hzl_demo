/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_size=s.size(),t_size=t.size();
        int s_num[123]={0},t_num[123]={0};

        for(int i=0;i<s_size;i++)
        {
            s_num[s[i]]++;
        }
        for(int i=0;i<t_size;i++)
        {
            t_num[t[i]]++;
        }

        for(int i=64;i<123;i++)
        {
            if(s_num[i]!=t_num[i])
                return char(i);
        }
        return 'a';


    }
};
// @lc code=end

