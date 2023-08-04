class Solution {
public:
    bool is_match(string &s, string &p,int i,int j,vector<vector<int>>&dp){
        if(i<0 && j<0){
            return true;
        }
        if(j<0 && i>=0){
            return false;
        }
        //  if(i<0 && j>=0)
        // {
        //     while(j>=0)
        //     {
        //         if(p[j]=='*') j--;
        //         else return false;
        //     }
        //     return true;
        // }
        if(i<0 && j>=0){
            while(j>=0 && p[j]=='*'){
                j--;
            }
            if(j<0){
                return true;
            }
            return false;
            
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==p[j] || p[j]=='?'){
            return dp[i][j]= is_match(s,p,i-1,j-1,dp);    
        }
        if(p[j]=='*'){
            return dp[i][j]= is_match(s,p,i-1,j,dp) || is_match(s,p,i,j-1,dp);
        }
        
        return dp[i][j]= false;
        
    }
    bool isMatch(string s, string p) {
        int m=s.length();
        int n=p.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return is_match(s,p,m-1,n-1,dp);
    }
};