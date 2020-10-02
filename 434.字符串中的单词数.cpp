/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        string str;
        int count = 0;
        stringstream ss(s);
        while (ss >> str) count ++;
        return count;
    }
};
// @lc code=end

