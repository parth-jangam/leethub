class Solution {
public:
    long long maxi(vector<vector<int>>& questions,long long i,vector<long long>&dp){
        if(i>=questions.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        long long pick=0;
        if(i<questions.size()){
            pick=questions[i][0]+maxi(questions,i+questions[i][1]+1,dp);
            
        }
        long long not_pick=maxi(questions,i+1,dp);
        return dp[i]=max(pick,not_pick);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        long long n=questions.size();
        vector<long long>dp(n+1,-1);
        return maxi(questions,0,dp);
    }
};