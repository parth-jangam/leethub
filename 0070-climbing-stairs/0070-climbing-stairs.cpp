class Solution {
public:
    int ways(int n,int i,vector<int>&dp){
        if(i>n){
            return 0;
        }
        if(i==n){
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]= ways(n,i+1,dp)+ways(n,i+2,dp);
    }
    int climbStairs(int n) {
        vector<int>dp(n,-1);
        return ways(n,0,dp);
    }
};