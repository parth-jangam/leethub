class Solution {
public:
    int lcs(string s1,string s2,int i,int j,vector<vector<int>>&dp){
        if(i>=s1.length() || j>=s2.length()){
            return 0;
        }
        if(dp[i][j]!=0){
            return dp[i][j];
        }
        int take=0;
        if(s1[i]==s2[j]){
            take=1+lcs(s1,s2,i+1,j+1,dp);
        }
        int not_take=max(lcs(s1,s2,i+1,j,dp),lcs(s1,s2,i,j+1,dp));
        return dp[i][j]= max(take,not_take);
    }
    int minInsertions(string s) {
        string s1=s;
        reverse(s.begin(),s.end());
        int n=s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int take=0;
                if(s1[i]==s[j]){
                    take=1+dp[i+1][j+1];
                }
                int not_take=max(dp[i+1][j],dp[i][j+1]);
                dp[i][j]= max(take,not_take);   
            }
        }
        int a=dp[0][0];
        return s.length()-a;
            
    }
};