/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> path;
        string str;
        while (ss>>str)
        {
            path.emplace_back(str);
        }
        string ans;
        for(int i=path.size()-1;i>0;i--)
        {
            ans+=path[i];
            ans+=' ';
        }
        ans+=path[0];
        return ans;
        
    }
};
// @lc code=end

