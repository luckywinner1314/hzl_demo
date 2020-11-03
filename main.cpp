#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> heights;
    int a[3]={1,2,2};
    int b[3]={3,8,2};
    int c[3]={5,3,5};
    heights.emplace_back(vector<int>(a,a+3));
    heights.emplace_back(vector<int>(b,b+3));
    heights.emplace_back(vector<int>(c,c+3));

    int n=heights.size();
    int m=heights[0].size();
    if(n==0) return 0;
    vector<vector<int>> dp(heights.size(),vector<int>(heights[0].size(),INT_MAX));
    vector<vector<int>> done(heights.size(),vector<int>(heights[0].size(),0));
    dp[0][0]=0;
    done[0][0]=1;//标记被走过
    vector<pair<int,int>> isDone;
    isDone.emplace_back(pair<int,int>(0,0));

    int x,y;
    pair<int,int> max_pair;
    while(1){
        int min_dp=INT_MAX;
        for(int i=0;i<isDone.size();i++){
            cout<<isDone.size()<<endl;
            x=isDone[i].first;
            y=isDone[i].second;
            // left 
            if(x-1>=0&&done[x-1][y]==0){
                int a=max(dp[x][y],abs(heights[x-1][y]-heights[x][y]));
                if(a<min_dp){
                    max_pair=make_pair(x-1,y);
                    min_dp=a;
                }
            }
            // up
            if(y-1>=0&&done[x][y-1]==0){
                int a=max(dp[x][y],abs(heights[x][y-1]-heights[x][y]));
                if(a<min_dp){
                    max_pair=make_pair(x,y-1);
                    min_dp=a;
                }
            }
            // right
            if(x+1<m&&done[x+1][y]==0){
                int a=max(dp[x][y],abs(heights[x+1][y]-heights[x][y]));
                if(a<min_dp){
                    max_pair=make_pair(x+1,y);
                    min_dp=a;
                }
            }
            // down
            if(y+1<n&&done[x][y+1]==0){
                int a=max(dp[x][y],abs(heights[x][y+1]-heights[x][y]));
                if(a<min_dp){
                    max_pair=make_pair(x,y+1);
                    min_dp=a;
                }
            }
            cout<<min_dp<<"  pair "<<max_pair.first<<" "<<max_pair.second<<endl;
        }
        if(min_dp!=INT_MAX){
            dp[max_pair.first][max_pair.second]=min_dp;
            isDone.emplace_back(max_pair);
            done[max_pair.first][max_pair.second]=1;
            cout<<min_dp<<"  add pair "<<max_pair.first<<" "<<max_pair.second<<endl;
        }
        if(max_pair.first==n-1&&max_pair.second==m-1) break;
    }
    cout<<" result  "<<dp[n-1][m-1];
    system("pause");

    return dp[n-1][m-1];
}
