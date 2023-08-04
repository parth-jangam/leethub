class Solution {
public:
    int max_profit(vector<int>& prices,int k,int i,bool flag,vector<vector<vector<int>>>&dp){
        if(i>=prices.size()){
            return 0;
        }
        if(k==0){
            return 0;
        }
        if(dp[i][flag][k]!=-1){
            return dp[i][flag][k];
        }
        if(flag==0){
            return dp[i][flag][k]= max(-prices[i]+max_profit(prices,k,i+1,1,dp),max_profit(prices,k,i+1,0,dp));
        }
        else{
            return dp[i][flag][k]= max(prices[i]+max_profit(prices,k-1,i+1,0,dp),max_profit(prices,k,i+1,1,dp));
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(3,vector<int>(k+1,-1)));
        return max_profit(prices,k,0,0,dp);
    }
};