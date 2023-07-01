class Solution {
public:
    int anss(int i,vector<int>&coins,int amount,vector<vector<int>>&dp){
        if(i==0){
            if(amount%coins[i]==0){
                return amount/coins[i];
            }
            return 1e9;
        }
        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }
        int pick=1e9;
        if(amount>=coins[i]){
            pick=1+anss(i,coins,amount-coins[i],dp);
        }
        int not_pick=anss(i-1,coins,amount,dp);
        return dp[i][amount]=min(pick,not_pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int a=anss(n-1,coins,amount,dp);
        if(a==1e9){
            return -1;
        }
    return a;
    }
};
