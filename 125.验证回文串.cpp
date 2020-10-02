/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int left=0,right=n-1;
        while (left<right)
        {
            while (left<right&&!isalnum(s[left]))
            {
                /* code */
                left++;
            }
            while (left<right&&!isalnum(s[right]))
            {
                /* code */
                right--;
            }
            if(left<right&&tolower(s[left])!=tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;

    }
};
// @lc code=end

