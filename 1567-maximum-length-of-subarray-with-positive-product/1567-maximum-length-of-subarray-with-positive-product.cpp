class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int len=0;
        int ans=0;
        int i=0;
        while(i<nums.size()){
            int e=i;
            while(e<nums.size() && nums[e]==0 ){
                e++;
            }
            int s=e;
            int last_neg=-1;
            int first_neg=-1;
            int count_neg=0;
            int end=0;
            while(e<nums.size() && nums[e]!=0){
                if(nums[e]<0){
                    if(first_neg==-1){
                        first_neg=e;
                    }
                    last_neg=e;
                    count_neg++;
                }
                e++;
            }
            if(count_neg%2==0){
                ans=max(ans,e-s);
            }
            else{
                if(first_neg!=-1){
                    ans=max(ans,e-first_neg-1);
                }
                if(last_neg!=-1){
                    ans=max(ans,last_neg-s);
                }
            }
            i=e;
            
        }
        return ans;
    }
};