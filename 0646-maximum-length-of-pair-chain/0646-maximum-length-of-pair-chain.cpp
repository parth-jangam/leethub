class Solution {
public:
    int longest(vector<vector<int>>& pairs,int i,int prev,vector<vector<int>>&dp){
        if(i>=pairs.size()){
            return 0;
        }
        if(dp[i][prev+1]!=-1){
            return dp[i][prev+1];
        }
        int take=0;
        if(prev==-1 || pairs[prev][1]<pairs[i][0]){
            take=1+longest(pairs,i+1,i,dp);
        }
        int not_take=longest(pairs,i+1,prev,dp);
        return dp[i][prev+1]= max(take,not_take);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int n=pairs.size();
        vector<vector<int>>dp(n+1,vector<int>(n+2,-1));
        return longest(pairs,0,-1,dp);
        
    }
};