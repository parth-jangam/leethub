class Solution {
public:
    int mini(vector<int>& cost, vector<int>& time,int n,int sel,int i,vector<vector<int>>&dp){
        if(sel<=0){
            return 0;
        }
        if(i>=n){
            return 1e9;
            
        }
        if(dp[i][sel]!=-1){
            return dp[i][sel];
        }
        // int take=0;
        int take=cost[i]+mini(cost,time,n,sel-time[i]-1,i+1,dp);
        int not_take=mini(cost,time,n,sel,i+1,dp);
        return dp[i][sel]= min(take,not_take);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n=cost.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return mini(cost,time,n,n,0,dp);
    }
};