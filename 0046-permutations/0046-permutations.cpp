class Solution {
public:
    void permul(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,unordered_map<int,bool>&mappe){
        
        if(nums.size()==temp.size()){
            ans.push_back(temp);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(!mappe[nums[i]]){
                mappe[nums[i]]=true;
                temp.push_back(nums[i]);
                permul(nums,ans,temp,mappe);
                temp.pop_back();
                mappe[nums[i]]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,bool>mappe;
        vector<vector<int>>ans;
        vector<int>temp;
        permul(nums,ans,temp,mappe);
        return ans;
        
    }
};