class Solution {
public:
    int max_rod(vector<int>& rods,int length,int i,vector<vector<int>>&dp){
        if(rods.size()<=i && length==0){
            return 0;
        }
        if(rods.size()<=i && length!=0){
            return INT_MIN;
        }
        if(dp[i][length+5000]!=-1){
            return dp[i][length+5000];
        }
        int stay=max_rod(rods,length,i+1,dp);
        int left=rods[i]+max_rod(rods,length+rods[i],i+1,dp);
        int right=rods[i]+max_rod(rods,length-rods[i],i+1,dp);
        return dp[i][length+5000]= max(stay,max(left,right));
        
    }
    int tallestBillboard(vector<int>& rods) {
        int n=rods.size();
        vector<vector<int>>dp(n,vector<int>(10001,-1));
        int ans= max_rod(rods,0,0,dp);
        
        if(ans<=0){
            return 0;
        }
        return ans/2;
        
    }
};