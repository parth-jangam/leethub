class Solution {
public:
    int mini(vector<int>& coins, int amount,int i,vector<vector<int>>&dp){
        if(amount==0){
            return 0;
        }
        if(i==coins.size() || amount<0){
            return 1e9;
        }
        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }
        int pick=1e9;
        int not_pick=1e9;
        if(amount>=coins[i]){
            pick=1+min(mini(coins,amount-coins[i],i,dp),mini(coins,amount-coins[i],i+1,dp));
        }
        not_pick=mini(coins,amount,i+1,dp);
        return dp[i][amount]= min(pick,not_pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans= mini(coins,amount,0,dp);
        
        if(ans==1e9)return -1;
        return ans;
    }
};