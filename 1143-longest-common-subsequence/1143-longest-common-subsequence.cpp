class Solution {
public:
    int longest(string text1,string text2,int i,int j,vector<vector<int>>&dp){
        if(i>=text1.length() || j>=text2.length()){
            return 0;
        }
        if(dp[i][j]!=0){
            return dp[i][j];
        }
        int take=0;
        if(text1[i]==text2[j]){
            take=1+longest(text1,text2,i+1,j+1,dp);
        }
        int not_take=max(longest(text1,text2,i+1,j,dp),longest(text1,text2,i,j+1,dp));
        return dp[i][j]= max(take,not_take);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int take=0;
                if(text1[i]==text2[j]){
                    take=1+dp[i+1][j+1];
                }
                int not_take=max(dp[i+1][j],dp[i][j+1]);
                dp[i][j]= max(take,not_take);

            }
        }
        return dp[0][0];
    }
};