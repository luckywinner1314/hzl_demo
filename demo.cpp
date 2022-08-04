#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++){
            vector<int> temp(nums.begin()+l[i],nums.begin()+r[i]);
            sort(temp.begin(),temp.end());
            if(temp.size()<3){
                ans.emplace_back(true);
                continue;
            }
            bool check=true;
            for(int i=2;i<temp.size();i++){
                if(temp[i]-temp[i-1]!=temp[i-1]-temp[i-2]){
                    check=false;
                    break;
                }
            }
            ans.emplace_back(check);
        }
        cout<<"test"<<endl;
        return ans;
    }
};
