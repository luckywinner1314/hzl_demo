/*
 * @lc app=leetcode.cn id=467 lang=cpp
 *
 * [467] 环绕字符串中唯一的子字符串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findSubstringInWraproundString(string p) {
        if(p.size()==0) return 0;
        int res=0;
        map<char,int> mp;
        mp[p[0]]=1;
        int pre=1;
        for(int i=1;i<p.size();i++)
        {
            if(p[i]-p[i-1]==1||(p[i]=='a'&&p[i-1]=='z'))
            {
                pre+=1;
            }
            else pre=1;
            mp[p[i]]=pre>mp[p[i]]?pre:mp[p[i]];

        }
        for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++)
        {
            res+=it->second;
        }
        return res;


    }
};
// @lc code=end

