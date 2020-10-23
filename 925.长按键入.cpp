/*
 * @lc app=leetcode.cn id=925 lang=cpp
 *
 * [925] 长按键入
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0;
        if(name[i]!=typed[j]) return false;
        bool temp=true;
        while(i!=name.size()&&j<typed.size()){
            if(name[i]==typed[j]){
                i++;
                j++;
                continue;
            }

            if(typed[j]==typed[j-1]){
                j++;
            }
            else{
                temp=false;
                break;
            }
        }
        while (j<typed.size())
        {
            /* code */
            if(typed[j]!=typed[j-1]){
                temp=false;
                break;
            }
            j++;
        }
        

        return i==name.size()&&temp;
    }
};
// @lc code=end

