class Solution {
public:
    int paths(int i,int j,int m, int n,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int path=0;
        if(i>=0 && i<m && j>=0 && j<n){
            path+=paths(i+1,j,m,n,dp);
            path+=paths(i,j+1,m,n,dp);
        }
        return dp[i][j]=path;
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return paths(0,0,m,n,dp);
    }
};