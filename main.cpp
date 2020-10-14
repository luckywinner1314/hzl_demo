#include<bits/stdc++.h>
using namespace std;
    int a[5]={3,3,3,4,5};
    vector<int> nums(a,a+5);
    bool ans=false;
    void dfs(vector<int>& nums,int id,int target)
    {
        if(target<0||ans==true) return;
        if(target==0)
        {
            ans=true;
            return;
        }
        for(int i=id;i<nums.size();i++)
        {
            if(ans==true) break;
            if(target-nums[i]>=0)
            {
                cout<<target<<"  "<<target-nums[i]<<"  "<<i<<endl;
                dfs(nums,i+1,target-nums[i]);
            }
        }
        return;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0,sum_half;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            cout<<sum<<endl;
        }
        sum_half=sum/2;
        cout<<"half:"<<sum_half<<endl;
        if(sum%2!=0||sum_half<nums[nums.size()-1]) return false;
        cout<<"half:"<<sum_half<<endl;
        if(nums[nums.size()-1]==sum_half) return true;
        dfs(nums,0,sum_half);
        return ans;
    }

    int main()
    {
        cout<<(bool)canPartition(nums);
        system("pause");
        return 0;
    }