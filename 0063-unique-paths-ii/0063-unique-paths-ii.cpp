class Solution {
public:
    int maxi(int i,int j,int m,int n,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp){
        
        
        
        if(i>=m || j>=n){
            return 0;
        }
        if(obstacleGrid[i][j]==1){
            return 0;
        }
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int ans=0;
        ans+=maxi(i+1,j,m,n,obstacleGrid,dp);
        ans+=maxi(i,j+1,m,n,obstacleGrid,dp);
        return dp[i][j]= ans;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return maxi(0,0,m,n,obstacleGrid,dp);
    }
};