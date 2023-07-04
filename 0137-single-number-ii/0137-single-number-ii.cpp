class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int prev=nums[0];
        int i=1;
        int count=1;
        while(i<nums.size()){
            if(nums[i]!=prev && count!=3){
                
                return nums[i-1];
            }
            else{
                if(nums[i]!=prev && count==3){
                    count=1;
                    prev=nums[i];
                }
                else{
                    count++;
                }
            }
            i++;
        }
        if(count==1){
            return nums[i-1];
        }
        return -1;
    }
};