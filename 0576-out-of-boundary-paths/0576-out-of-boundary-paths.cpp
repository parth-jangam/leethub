#define mod 1000000007
class Solution {
public:
    int moves(int m, int n, int maxMove, int startRow, int startColumn,vector<vector<vector<int>>>&dp){
        if(startRow<0 || startRow>=m || startColumn<0 || startColumn>=n){
            return 1;
        }
        if(maxMove==0){
            return 0;
        }
        if(dp[startRow][startColumn][maxMove]!=-1){
            return dp[startRow][startColumn][maxMove]%mod;
        }
        int up=0;
        up=(up+moves(m,n,maxMove-1,startRow-1,startColumn,dp))%mod;
        up=(up+moves(m,n,maxMove-1,startRow+1,startColumn,dp))%mod;
        up=(up+moves(m,n,maxMove-1,startRow,startColumn-1,dp))%mod;
        up=(up+moves(m,n,maxMove-1,startRow,startColumn+1,dp))%mod;
        return dp[startRow][startColumn][maxMove]= (up)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n+1,vector<int>(maxMove+1,-1)));
        return moves(m,n,maxMove, startRow,startColumn,dp);
    }
};