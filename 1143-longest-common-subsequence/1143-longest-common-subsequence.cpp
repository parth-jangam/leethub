class Solution {
public:
    int max_seq(string text1, string text2,int i,int j,vector<vector<int>>&dp){
        if(i>=text1.length() || j>=text2.length()){
            return 0;
        }
        if(dp[i][j]!=0){
            return dp[i][j];
        }
        int a=0;
        int b=0;
        if(text1[i]==text2[j]){
            a=1+max_seq(text1,text2,i+1,j+1,dp);
        }
        else{
            b=max(max_seq(text1,text2,i+1,j,dp),max_seq(text1,text2,i,j+1,dp));
        }
        return dp[i][j]=max(a,b);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=0;i<=n;i++){
            dp[m][i]=0;
        }
        for(int i=0;i<=m;i++){
            dp[i][n]=0;
        }
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int a=0;
                int b=0;
                if(text1[i]==text2[j]){
                    a=1+dp[i+1][j+1];
                }
                else{
                    b=max(dp[i+1][j],dp[i][j+1]);
                }
                dp[i][j]=max(a,b);
            }
        }
        return dp[0][0];
    }
};