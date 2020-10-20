/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        for(int i=0;i<S.size();i++){
            if(S[i]=='#')
            {
                if(i==0) {S.erase(i,1);i--;}
                else{
                    S.erase(i-1,2);
                    i=i-2;
                }
                
            }
        }
        for(int i=0;i<T.size();i++){
            if(T[i]=='#'){
                if(i==0) {T.erase(i,1);i--;}
                else{
                    T.erase(i-1,2);
                    i=i-2;
                }
            }
        }

        return T==S;
    }
};
// @lc code=end

