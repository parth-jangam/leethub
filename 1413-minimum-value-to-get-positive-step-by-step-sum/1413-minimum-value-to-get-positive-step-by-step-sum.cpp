class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n;
        // int i=0;
        if(nums[0]<0){
            n=(-nums[0])+1;
            
        }
        else{
            n=1;
            
        }
        
        while(true){
            int sum=n;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                if(sum<=0){
                    n++;
                    break;
                }
            }
            if(sum>0){
                return n;
            }
            
        }
    }
};