class Solution {
public:
    void subset(vector<int>&nums,vector<vector<int>>&ans,
        vector<int>&temp,int i){
            if(i==nums.size()){
                
                ans.push_back(temp);
                return ;
            }
            temp.push_back(nums[i]);
            subset(nums,ans,temp,i+1);
            temp.pop_back();
            subset(nums,ans,temp,i+1);
        
        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        vector<int>temp;
        subset(nums,ans,temp,0);
        sort(ans.begin(),ans.end());
        int i=1;
        while(i<ans.size()){
            if(ans[i]==ans[i-1]){
                ans.erase(ans.begin()+i);
            }
            else{
                i++;
            }
        }
        return ans;
    }
};