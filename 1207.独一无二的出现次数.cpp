/*
 * @lc app=leetcode.cn id=1207 lang=cpp
 *
 * [1207] 独一无二的出现次数
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // 最多能出现n个不同，1+2+。。。+n<=arr.size();
        if(arr.size()==2&&arr[0]!=arr[1]) return false; 
        sort(arr.begin(),arr.end());
        int sum=1;
        vector<int> time;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                sum++;
            }
            else{
                if(find(time.begin(),time.end(),sum)!=time.end()) return false;

                time.emplace_back(sum);
                if(time.size()*(time.size()+1)/2>arr.size()) return false;
                sum=1;
            }
        }
        return true;
    }
};
// @lc code=end

