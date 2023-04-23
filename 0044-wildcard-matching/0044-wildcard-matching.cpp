class Solution {
public:
    bool match(int i,int j,string &s,string &p,vector<vector<int>>&dp){
        if(i<0 && j<0){
            return true;
        }
        if(j<0 && i>=0){
            return false;
        }
         if(i<0 && j>=0)
        {
            while(j>=0)
            {
                if(p[j]=='*') j--;
                else return false;
            }
            return true;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        // bool a,b;
        if(s[i]==p[j] || p[j]=='?'){
             return dp[i][j]=match(i-1,j-1,s,p,dp);
        }
        
        if(p[j]=='*'){
            return dp[i][j]=match(i-1,j,s,p,dp) || match(i,j-1,s,p,dp);
        }
        
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {

        int n=s.length();
        int m=p.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return match(n-1,m-1,s,p,dp);
    }
};