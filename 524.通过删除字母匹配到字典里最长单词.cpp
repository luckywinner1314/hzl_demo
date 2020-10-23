/*
 * @lc app=leetcode.cn id=524 lang=cpp
 *
 * [524] 通过删除字母匹配到字典里最长单词
 */

// @lc code=star
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubSequence(string s,string s1){
        int i=0,j=0;
        while(i!=s1.size()&&j<s.size()){
            if(s1[i]==s[j]){
                i++;
            }
            j++;
        }
        return i==s1.size();
    }
    string findLongestWord(string s, vector<string>& d) {
        string res;
        for(int i=0;i<d.size();i++){
            if(isSubSequence(s,d[i])){
                if(d[i].size()==res.size()&&d[i]<res){
                    res=d[i];
                }
                if(d[i].size()>res.size()){
                    res=d[i];
                }
            }
        }
        return res;
    }
};
// @lc code=end

