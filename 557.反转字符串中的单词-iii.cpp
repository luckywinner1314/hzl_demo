/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==0) return s;
        stringstream ss(s);
        string ans;
        string str;
        while(ss>>str)
        {
            reverse(str.begin(),str.end());
            ans+=str;
            ans+=' ';
        }
        ans.erase(ans.end()-1);
        return ans;

    }
};
// @lc code=end

