/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        string str;
        stringstream ss(s);
        while (ss >> str)
        {
        }
        return str.size();
        
    }
};
// @lc code=end

