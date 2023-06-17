class Solution {
public:
    void comb_sum(vector<int>& candidates,vector<vector<int>>&ans,vector<int>temp,int i,int target){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            comb_sum(candidates,ans,temp,i,target-candidates[i]);
            temp.pop_back();
        }
        comb_sum(candidates,ans,temp,i+1,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        comb_sum(candidates,ans,temp,0,target);
        return ans;
    }
};