/*
 * @lc app=leetcode.cn id=771 lang=cpp
 *
 * [771] 宝石与石头
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int harsh[123]={0};
        int count=0;
        for(int i=0;i<J.size();i++)
            harsh[J[i]]=1;
        for(int i=0;i<S.size();i++)
        {
            if(harsh[S[i]]==1)
                count++;
        }
        return count;
    }
};
// @lc code=end

