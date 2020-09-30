/*
 * @lc app=leetcode.cn id=396 lang=cpp
 *
 * [396] 旋转函数
 */

// @lc code=start
class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        // if(A.size()==0) return 0;
        // long max=-999999999;
        // for(long i=0;i<A.size();i++)
        // {
        //     long mul=0;
        //     for(long j=0;j<A.size();j++)
        //     {
        //         mul+=j*A[(j+i)%A.size()];
        //     }
        //     if(mul>max) max=mul;
        // }
        // return max;
        long n=A.size();
        if(n==0) return 0;
        long max=INT_MIN;
        long f[n];
        for(long i=0;i<n;i++) f[i]=0;

        long sum=0;
        for(long i=0;i<n;i++)
        {
            f[0]+=i*A[i];
            sum+=A[i];
        }

        max=max>f[0]?max:f[0];
        if(max==INT_MAX) return max;
        for(long i=1;i<n;i++)
        {
            f[i]=f[i-1]+sum-n*A[(n-i)%n];
            max=max>f[i]?max:f[i];
        }

        return max;
    }
};
// @lc code=end

