class Solution {
public:
    int maxi(vector<int>& prices,int flag, int i,int n,vector<vector<vector<int>>>&dp){
        if(i==prices.size()){
            return 0;
        }
        if(n==1){
            return 0;
        }
        if(dp[i][flag][n]!=-1){
            return dp[i][flag][n];
        }
        if(flag==0){
            return dp[i][flag][n]=max(-prices[i]+maxi(prices,1,i+1,n,dp),maxi(prices,0,i+1,n,dp));
        }
        return dp[i][flag][n]=max(prices[i]+maxi(prices,0,i+1,n+1,dp),maxi(prices,1,i+1,n,dp));
    }
    int maxProfit(vector<int>& prices) {
        // int n=prices.size();
        // vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(2,-1)));
        // return maxi(prices,0,0,0,dp);
        int mini=prices[0];
    int maxi=prices[0];
    int i=0;
    int ans=0;
    while(i<prices.size()){
        if(prices[i]<mini){
            mini=prices[i];
            maxi=prices[i];
        }
        else{
            if(prices[i]>maxi){
                maxi=prices[i];
            }
        }
        ans=max(ans,maxi-mini);
        i++;
    }
    return ans;
    }
};