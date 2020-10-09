/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        int harsh[123]={0};
        for(int i=0;i<s.size();i++)
        {
            harsh[s[i]]++;
        }
        int ans=-1;
        for(int i=0;i<s.size();i++)
        {
            if(harsh[s[i]]<2)
            {
                return i;
            }
        }
        return ans;

    }
};
// @lc code=end

