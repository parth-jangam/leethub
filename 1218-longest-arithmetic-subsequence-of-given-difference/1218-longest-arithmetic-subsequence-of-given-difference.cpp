class Solution {
public:
    
    
     map <int,vector<int>> mp;
    int dp[100001];
    int ans = 0;
    int helper(int idx,vector<int>& arr,int& diff){
        if(idx>=arr.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int res = 1;
        int nxtval = arr[idx]+diff;
        if(mp.find(nxtval)!=mp.end()){
            auto nxtidx = upper_bound(mp[nxtval].begin(),mp[nxtval].end(),idx);
            if(nxtidx!=mp[nxtval].end()){
                res = max(res,1+helper(*nxtidx,arr,diff));
            }
        }
        helper(idx+1,arr,diff);
        ans = max(ans,res);
        return dp[idx] = res;
    }
    int longestSubsequence(vector<int>& arr, int diff) {
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        helper(0,arr,diff);
        return ans;
    }
    
    // int lcs(vector<int>& arr, int difference,int i,int prev,vector<vector<int>>&dp){
    //     if(i==arr.size())
    //     {
    //         return 0;
    //     }
    //     if(dp[i][prev+1]!=0){
    //         return dp[i][prev+1];
    //     }
    //     int len=lcs(arr,difference,i+1,prev,dp);
    //     if(prev==-1 || arr[i]-arr[prev]==difference){
    //         len=max(len,1+lcs(arr,difference,i+1,i,dp));
    //     }
    //     // int not_take=
    //     return dp[i][prev+1]= len;
    // }
    // int longestSubsequence(vector<int>& arr, int difference) {
    //     int n=arr.size();
//         vector<vector<int>>dp(n+1,vector<int>(n+2,0));
        
//         for(int i=n-1;i>=0;i--){
//             for(int prev=i-1;prev>=-1;prev--){
//                 int take=0;
//                 if(prev==-1 || arr[i]-arr[prev]==difference){
//                     take=1+dp[i+1][i+1];
//                 }   
//                 int not_take=dp[i+1][prev+1];
//                 dp[i][prev+1]= max(take,not_take);
//             }
//         }
        
//         return dp[0][0];
        
        
        
        
        
        
        
    //     vector<int>dp;
    //     dp.push_back(arr[0]);
    //     for(int i=1;i<n;i++){
    //         if(dp.back()+difference==arr[i]){
    //             dp.push_back(arr[i]);
    //         }
    //         else{
    //             int ind= upper_bound(dp.begin(),dp.end(),arr[i])-dp.begin();
    //             cout<<ind<<endl;
    //             dp[ind]=arr[i];
    //         }
    //     }
    //     return dp.size();
    // }
};