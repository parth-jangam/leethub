class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=true;
        }
        int maxi=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]>maxi && mp[-(nums[i])]){
                maxi=nums[i];
            }
        }
        return maxi;
    }
};