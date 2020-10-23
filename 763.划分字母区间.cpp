/*
 * @lc app=leetcode.cn id=763 lang=cpp
 *
 * [763] 划分字母区间
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> ans;
        int first=0;
        int last_position[26]={0};
        for(int i=0;i<S.size();i++){
            last_position[S[i]-'a']=i;
        }
        while (first!=S.size())
        {
            /* code */
            // 当前字符串中字符的最后位置
            int last=-1;
            for(int i=first;i<S.size();i++){
                last=last<last_position[S[i]-'a']?last_position[S[i]-'a']:last;
                if(last==i){
                    ans.emplace_back(last-first+1);
                    first=i+1;
                    break;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

