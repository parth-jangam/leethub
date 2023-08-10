class Solution {
public:
    int profit(int i,int n,vector<int>&prices,int flag,vector<vector<int>>&dp){
        if(i>=n){
            return 0;
        }
        if(dp[i][flag]!=-1){
            return dp[i][flag];
        }
        if(flag==1){
            return dp[i][flag]=max(-prices[i]+profit(i+1,n,prices,0,dp),profit(i+1,n,prices,1,dp));
        }
        return dp[i][flag]=max(prices[i]+profit(i+2,n,prices,1,dp),profit(i+1,n,prices,0,dp));
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+2,vector<int>(2,0));
        dp[n][0]=0;
        dp[n][1]=0;
        for(int i=n-1;i>=0;i--){
            for(int flag=0;flag<=1;flag++){
                if(flag==1){
                    dp[i][flag]=max(-prices[i]+dp[i+1][0],dp[i+1][1]);
                }
                else{
                    dp[i][flag]=max(prices[i]+dp[i+2][1],dp[i+1][0]); 
                }  
            }
        }

        return dp[0][1];
    }
};