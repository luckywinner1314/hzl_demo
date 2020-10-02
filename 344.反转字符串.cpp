/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()<2) return;
        int size=s.size();
        int left=0,right=size-1;
        while (left<right)
        {
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
        return;
    }
};
// @lc code=end

