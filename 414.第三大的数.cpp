/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution {
    static bool cmp(int a,int b){
        return a>b;
    }
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        int max[3]={-999999999,-999999999,-999999999};
        int max_id=0;//第几大数下标
        max[max_id++]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                max[max_id++]=nums[i];
            }
            if(max_id==3) break;
        }

        if(max_id==3) return max[2];
        else return max[0];
        
    }
};
// @lc code=end

