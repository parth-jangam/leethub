class Solution {
public:
    int lcs(string text1, string text2,int i,int j,vector<vector<int>>&dp){
        if(i>=text1.length() || j>=text2.length()){
            return 0;
        }
        if(dp[i][j]!=0){
            dp[i][j];
        }
        int take=0;
        int not_take=0;
        if(text1[i]==text2[j]){
            take=1+lcs(text1,text2,i+1,j+1,dp);
        }
        else{
            not_take=max(lcs(text1,text2,i+1,j,dp),lcs(text1,text2,i,j+1,dp));
        }
        return dp[i][j]= max(take,not_take);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i=0;i<=n;i++){
            dp[i][m]=0;
        }
        for(int i=0;i<=m;i++){
            dp[n][i]=0;
        }
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int take=0;
                int not_take=0;
                if(text1[i]==text2[j]){
                    take=1+dp[i+1][j+1];
                }
                else{
                    not_take=max(dp[i+1][j],dp[i][j+1]);
                }
                dp[i][j]= max(take,not_take);

            }
        }
        return dp[0][0];
    }
};