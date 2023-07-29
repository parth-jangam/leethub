class Solution {
public:
    int paths(int m,int n,int i,int j,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(i==m || i<0){
            return 0;
        }
        if(j==n || j<0){
            return 0;
        }
        if(dp[i][j]!=0){
            return dp[i][j];
        }
        int right=0,left=0;
        right+=paths(m,n,i+1,j,dp);
        left+= paths(m,n,i,j+1,dp);
        return dp[i][j] =right+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        return paths(m,n,0,0,dp);
    }
};