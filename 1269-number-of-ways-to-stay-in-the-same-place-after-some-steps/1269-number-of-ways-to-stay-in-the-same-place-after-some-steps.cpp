class Solution {
public:
    int mod=1000000007;
    long long total(int steps, int arrLen,int i,vector<vector<long long>>&dp){
        
        if(i==0 && steps==0){
            return 1;
        }
        if(steps==0){
            return 0;
        }
        if(i>=arrLen || i<0){
            return 0;
        }
        
        if(dp[steps][i]!=-1){
            return dp[steps][i];
        }
        long long int r=0;
        r+=(total(steps-1,arrLen,i+1,dp)%(mod));
        r+=(total(steps-1,arrLen,i-1,dp)%(mod));
        r+=(total(steps-1,arrLen,i,dp)%(mod));
        return dp[steps][i]= r%(mod);
    }
    int numWays(int steps, int arrLen) {
        
        vector<vector<long long>>dp(steps+1,vector<long long>(steps+1,-1));
        return total(steps,arrLen,0,dp);
    }
};