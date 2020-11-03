/*
 * @lc app=leetcode.cn id=647 lang=cpp
 *
 * [647] 回文子串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubstrings(string s) {
        int sum=0,n=s.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<=1;j++){
                int left=i,right=i+j;
                while(left>=0&&right<n&&s[left--]==s[right++]) sum++;
            }
        }
        return sum;
    }
};
// @lc code=end

