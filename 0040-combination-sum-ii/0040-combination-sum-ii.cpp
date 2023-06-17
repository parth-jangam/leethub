class Solution {
public:
    void subset(int init, vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>dp){
        // if(init==candidates.size()){
            if(target<0){
                return;
            }
            if(target==0){
                ans.push_back(dp);
                return;
            }
        
        
        for(int i=init;i<candidates.size();i++){
            if(i>init &&candidates[i]==candidates[i-1])continue;
            // if(candidates[i]>target)break;
            dp.push_back(candidates[i]);
            subset(i+1,candidates,target-candidates[i],ans,dp);
            dp.pop_back();
        }
        
        // subset(init+1,candidates,target,ans,dp);
        
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>dp;
        subset(0,candidates,target,ans,dp);
        return ans;
        
    }
};