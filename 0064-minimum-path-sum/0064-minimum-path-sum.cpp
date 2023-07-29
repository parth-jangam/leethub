class Solution {
public:
    int mini(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1){
            return grid[i][j];
        }
        if(i>=m || j>=n){
            return 1e9;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int right=0;
        int left=0;
        right=grid[i][j]+mini(i+1,j,m,n,grid,dp);
        left=grid[i][j]+mini(i,j+1,m,n,grid,dp);
        return dp[i][j]= min(right,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return mini(0,0,m,n,grid,dp);
    }
};