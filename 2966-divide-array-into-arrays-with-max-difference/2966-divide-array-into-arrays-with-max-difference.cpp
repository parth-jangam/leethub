class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<vector<int>>ans;
        int temp=nums[0];
        while(i<nums.size()){
//             if(nums[i]-temp<=k){
                
//             }
            if(nums[i+2]-nums[i]<=k){
                ans.push_back({nums[i],nums[i+1],nums[i+2]});
                
            }
            else{
                ans.clear();
                return ans;
            }
            i=i+3;
        }
        return ans;
    }
};