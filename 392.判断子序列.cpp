/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l1=s.size(),l2=t.size();
        int i=0,j=0;
        while (i<l1&&j<l2)
        {
            if(s[i]==t[j]) i++;
            j++;
        }
        if(i==l1) return true;
        else return false;
        
    }
};
// @lc code=end

