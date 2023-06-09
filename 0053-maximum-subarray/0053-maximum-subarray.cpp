class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_sum=INT_MIN;
        int i=0;
        while(i<nums.size()){
            sum+=nums[i];
            max_sum=max(sum,max_sum);
            if(sum<0){
                sum=0;
            }
            i++;
        }
        return max_sum;
    }
};