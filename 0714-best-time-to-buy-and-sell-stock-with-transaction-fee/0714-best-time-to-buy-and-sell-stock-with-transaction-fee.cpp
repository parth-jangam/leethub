class Solution {
public:
    int profit(vector<int>& prices, int fee,int flag,int i,vector<vector<int>>&dp){
        if(i>=prices.size()){
            return 0;
        }
        if(dp[i][flag]!=-1){
            return dp[i][flag];
        }
        if(flag==0){
            return dp[i][flag]= max(-prices[i]+profit(prices,fee,1,i+1,dp),profit(prices,fee,0,i+1,dp));
        }
        // else{
            return dp[i][flag]= max(prices[i]+profit(prices,fee,0,i+1,dp)-fee,profit(prices,fee,1,i+1,dp));
        // }
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(3,-1));
        return profit(prices,fee,0,0,dp);
    }
};