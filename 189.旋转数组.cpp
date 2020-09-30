/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int count=0;
        for(int i=0;count<nums.size();i++)
        {
            int prev=nums[i];
            int current=i;
            
            do
            {
                int next=(current+k)%nums.size();
                int temp=nums[next];
                nums[next]=prev;
                prev=temp;
                current=next;
                count++;
            }while(current!=i);
            
        }
    }
};
// @lc code=end

