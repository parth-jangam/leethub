class Solution {
public:
    int max_sum(vector<int>&cost,int i,vector<int>&dp){
        if(i>=cost.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=min(cost[i]+max_sum(cost,i+1,dp),cost[i]+max_sum(cost,i+2,dp));
    } 
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+2,-1);
        int minn=min(max_sum(cost,0,dp),max_sum(cost,1,dp));
        return minn;
        
    }
};