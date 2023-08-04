class Solution {
public:
    int maxi(vector<int>& prices,int i,bool flag,vector<vector<int>>&dp){
        if(i>=prices.size()){
            return 0;
        }
        if(dp[i][flag]!=-1){
            return dp[i][flag];
        }
        if(flag==0){
            return dp[i][flag]= max(-prices[i]+maxi(prices,i+1,1,dp),maxi(prices,i+1,0,dp));
        }
        else{
            return dp[i][flag]= max(prices[i]+maxi(prices,i+1,0,dp),maxi(prices,i+1,1,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(3,-1));
        return maxi(prices,0,0,dp);
    }
};