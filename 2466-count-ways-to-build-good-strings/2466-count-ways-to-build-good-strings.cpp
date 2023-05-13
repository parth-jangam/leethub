class Solution {
public:
    int maxi(int low, int high, int zero, int one,int len,vector<int>&dp){
         if(len>high){
            return 0;
        }
        int append=0;
        if(dp[len]!=-1){
            return dp[len];
        }
        if(len>=low && len<=high){
             append=1;
        }
        append=append%1000000007+maxi(low,high,zero,one,len+one,dp)%1000000007;
        append=append%1000000007+maxi(low,high,zero,one,len+zero,dp)%1000000007;
        return dp[len]= append%1000000007;
        
    }
    int countGoodStrings(int low, int high, int zero, int one) {
       
        vector<int>dp(high+1,-1);
        return maxi(low,high,zero,one,0,dp)%1000000007;
        
    }
};