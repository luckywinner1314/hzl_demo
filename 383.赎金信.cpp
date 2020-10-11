/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int harsh[123]={0};
        for(int i=0;i<magazine.size();i++)
        {
            harsh[magazine[i]]++;
        }

        for(int i=0;i<ransomNote.size();i++)
        {
            harsh[ransomNote[i]]--;
            if(harsh[ransomNote[i]]<0) return false;
        }
        return true;

    }
};
// @lc code=end

