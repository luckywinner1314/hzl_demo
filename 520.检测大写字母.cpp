/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool temp=true;
        if(word[0]<='Z')
        {
            if(word[1]>='a')
            {
                for(int i=1;i<word.size();i++)
                {
                    if(word[i]<='Z')
                    {
                        temp=false;
                        return temp;
                    }
                }
            }
            else
            {
                for(int i=1;i<word.size();i++)
                {
                    if(word[i]>='a')
                    {
                        temp=false;
                        return temp;
                    }
                }
            }
            
        }
        else
        {
            for(int i=1;i<word.size();i++)
            {
                if(word[i]<'a')
                {
                    temp=false;
                    return temp;
                }
            }
        }
        return temp;
    }
};
// @lc code=end

