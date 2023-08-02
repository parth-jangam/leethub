class Solution {
public:
    int lcs(string s,string p,int i,int j,vector<vector<int>>&dp){
        if(i>=s.length() || j>=p.length()){
            return 0;
        }
        if(dp[i][j]!=0){
            return dp[i][j];
        }
        int take=0;
        
        if(s[i]==p[j]){
            take=1+lcs(s,p,i+1,j+1,dp);
        }
        int not_take=max(lcs(s,p,i+1,j,dp),lcs(s,p,i,j+1,dp));
        return dp[i][j]= max(take,not_take);
    }
    int longestPalindromeSubseq(string s) {
        string p=s;
        reverse(s.begin(),s.end());
        int n=s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int take=0;
                if(s[i]==p[j]){
                    take=1+dp[i+1][j+1];
                }
                int not_take=max(dp[i+1][j],dp[i][j+1]);
                dp[i][j]= max(take,not_take);
            }
        }
        return dp[0][0];
        
    }
};