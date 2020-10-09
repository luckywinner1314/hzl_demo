/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        string::iterator it=s.begin();
        int n=s.size();
        n=n/(2*k);

        for(int i=0;i<n;i++)
        {
            reverse(it,it+k);
            for(int j=0;j<2*k;j++) it++;
        }
        if(s.size()%(2*k)<k){
            reverse(it,s.end());
        }
        else
        {
            /* code */
            reverse(it,it+k);
        }
        

        return s;
    }

};
// @lc code=end

