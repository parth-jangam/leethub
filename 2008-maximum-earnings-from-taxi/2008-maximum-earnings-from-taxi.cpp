class Solution {
public:
      int getNextCurr(vector<vector<int>>& rides,int start,int key){
        int end=rides.size()-1;
        int nextCurr=rides.size();
        while(start<=end){
            int mid=(start+end)/2;
            if(rides[mid][0]>=key){
                nextCurr=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return nextCurr;

    }
    long long maxi(int n, vector<vector<int>>& rides,int i,vector<long long>&dp){
        if(i>=rides.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        long long not_take=maxi(n,rides,i+1,dp);
        // int take=0;
        
        long long nextCurr=getNextCurr(rides,i,rides[i][1]);
        long long take=(rides[i][1]-rides[i][0]+rides[i][2])+maxi(n,rides,nextCurr,dp);
        
        
        return dp[i]=max(take,not_take);
    }
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(rides.begin(),rides.end());
        int m=rides.size();
        vector<long long>dp(m+1,-1);
        
        // for(int i=m-1;i>=0;i--){
        //     for(int prev=i-1;prev>=-1;prev--){
        //         int take=0;
        //         if(prev==-1 || rides[prev][1]<=rides[i][0]){
        //             take=(rides[i][1]-rides[i][0]+rides[i][2])+dp[i+1][i+1];
        //         }
        //         int not_take=dp[i+1][prev+1];
        //         dp[i][prev+1]=max(take,not_take);
        //     }
        // }
        
        // return dp[0][-1+1];
        return maxi(n,rides,0,dp);
    }
};