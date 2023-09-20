class Solution {
public:
    void trying(set<vector<int>>&s,vector<int>& nums,vector<int>temp,int i,int prev){
        if(temp.size()>=2){
            s.insert(temp);
        }
        if(i>=nums.size()){
            return;
        }
        if(prev==-1 || nums[i]>=nums[prev]){
            temp.push_back(nums[i]);
            trying(s,nums,temp,i+1,i);
            temp.pop_back();
        }
        trying(s,nums,temp,i+1,prev);
        
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>ans;
        vector<int>temp;
        trying(s,nums,temp,0,-1);
        for(auto x:s){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};