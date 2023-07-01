class Solution {
public:
    int mini(vector<vector<int>>& grid,int i,int j,int m,int n,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1){
            return grid[i][j];
        }
        if(i>=m || j>=n){
            return INT_MAX;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int bottom=INT_MAX;
        int right=INT_MAX;
        if(i>=0 && j>=0 && i<m-1 && j<n){
            bottom=grid[i][j]+mini(grid,i+1,j,m,n,dp);
        }
        if(i>=0 && j>=0 &&i<m && j<n-1){
            right=grid[i][j]+mini(grid,i,j+1,m,n,dp);
        }
        return dp[i][j]= min(bottom,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return mini(grid,0,0,m,n,dp);
    }
};