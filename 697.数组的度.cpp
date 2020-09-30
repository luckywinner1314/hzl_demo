/*
 * @lc app=leetcode.cn id=697 lang=cpp
 *
 * [697] 数组的度
 */

// @lc code=start
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int harsh[50000]={0};
        int size=nums.size();
        int max=0,ans=99999;//max为数组的度
        for(int i=0;i<size;i++)
        {
            harsh[nums[i]]++;
            if(harsh[nums[i]]>max) max=harsh[nums[i]];
        }
        for(int i=0;i<50000;i++)
        {
            if(harsh[i]==max)  //找到度的元素
            {
                int head=0,tail=size-1;//head元素出现第一个位置，tail为最后位置
                //找元素出现的第一个位置
                for(int j=0;j<size;j++)
                {
                    if(nums[j]==i)
                    {
                        head=j;
                        break;
                    }
                }
                //找元素出现的最后位置
                for(int j=size-1;j>=0;j--)
                {
                    if(nums[j]==i)
                    {
                        tail=j;
                        break;
                    }
                }
                if(ans>(tail-head+1)) ans=tail-head+1;
            }
        }
        return ans;
    }
};
// @lc code=end

