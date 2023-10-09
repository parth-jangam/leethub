class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)return {-1,-1};
        vector<int>::iterator it,it1;
        
        it=lower_bound(nums.begin(),nums.end(),target);
        
        int pos1=it-nums.begin();
        
        it1=upper_bound(nums.begin(),nums.end(),target);
        
        int pos2=it1-nums.begin();
        // cout<<"hello";
        if(pos1>=nums.size() || nums[pos1]!=target){
            return {-1,-1};
        }
        vector<int>ans;
        ans.push_back(pos1);
        ans.push_back(pos2-1);
        return ans;
    }
};