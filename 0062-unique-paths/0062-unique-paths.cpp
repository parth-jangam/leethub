class Solution {
public:
       int maxi(int i,int j,int m, int n,vector<vector<int>>&dp){
        if(i>=m || j>=n){
            return 0;
        }
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        // int left=0;
        // if(j+1<n){
        int left=maxi(i,j+1,m,n,dp);
        // }
        // int down=0;
        // if(i+1<m){
        int down=maxi(i+1,j,m,n,dp);
        // }

        return dp[i][j]=down+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int i=0;
        int j=0;
        return maxi(i,j,m,n,dp);
    }
};