class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1){
            return true;
        }
        int i=0;
        if(nums[i]<nums[nums.size()-1]){
            while(i<nums.size()-1){
                if(nums[i]>nums[i+1]){
                    return false;
                }
                i++;
            }
        }
        else{
            while(i<nums.size()-1){
                if(nums[i]<nums[i+1]){
                    return false;
                }
                i++;
            }
        }
        return true;
    }
};