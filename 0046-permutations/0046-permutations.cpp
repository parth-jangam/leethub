class Solution {
public:
 void permult(vector<int>& nums,vector<vector<int>>&ans,vector<int>dp, map<int,bool>check){
        if(dp.size()==nums.size()){
            ans.push_back(dp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(check[i]==false){
                dp.push_back(nums[i]);
                check[i]=true;
                permult(nums,ans,dp,check);
                check[i]=false;
                dp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>dp;
        map<int,bool>check;
         permult(nums,ans,dp,check);
        
        return ans;
        
    }
};