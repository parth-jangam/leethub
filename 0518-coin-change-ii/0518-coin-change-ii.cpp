class Solution {
public:
    int ways(int amount, vector<int>& coins,int sum,int i,vector<vector<int>>&dp){
        if(sum==amount){
            return 1;
        }
        if(i==coins.size() || sum>amount){
            return 0;
        }
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        int take=0,not_take=0;
        if(sum+coins[i]<=amount){
            take+=(max(ways(amount,coins,sum+coins[i],i+1,dp),ways(amount,coins,sum+coins[i],i,dp)));  
        }
        not_take+= (ways(amount,coins,sum,i+1,dp));
        return dp[i][sum]=take+not_take;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        return ways(amount,coins,0,0,dp);
    }
};