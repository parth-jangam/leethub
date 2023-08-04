class Solution {
public:
    int mini(string s, string t,int i,int j,vector<vector<int>>&dp){
        if(i<0 && j<0){
            return 1;
        }
        if(i<0){
            return 0;
        }
        if(j<0){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int take=0,not_take=0;;
        if(s[i]==t[j]){
            take=(mini(s,t,i-1,j-1,dp)+mini(s,t,i-1,j,dp));
        }
        else{
            not_take=mini(s,t,i-1,j,dp);
        }
        return dp[i][j]= take+not_take;
    }
    int numDistinct(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return mini(s,t,n-1,m-1,dp);   
    }
};