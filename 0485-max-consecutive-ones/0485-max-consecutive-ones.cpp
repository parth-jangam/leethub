class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int max_count=0;
        int count=0;
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            max_count=max(count,max_count);
            i++;
        }
        return max_count;
    }
};