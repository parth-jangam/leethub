class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum=INT_MIN;
        int max_sum1=INT_MAX;
        
        int sum=0;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sum1+=nums[i];
            max_sum1=min(sum1,max_sum1);
            max_sum=max(sum,max_sum);
            if(sum<0){
                sum=0;
            }
            if(sum1>0){
                sum1=0;
            }
        }
        max_sum1=abs(max_sum1);
        return max(max_sum1,max_sum);
    }
};