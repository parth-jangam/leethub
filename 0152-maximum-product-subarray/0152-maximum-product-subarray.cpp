class Solution {
public:
    int max_right(vector<int>& nums){
        int i=nums.size()-1;
        int prod=1;
        int max_prod=INT_MIN ;
        while(i>=0){
            prod*=nums[i];
            max_prod=max(prod,max_prod);
            if(prod==0){
                prod=1;
            }
            i--;
        }
        return max_prod;
    }
    int max_left(vector<int>& nums){
        int i=0;
        int prod=1;
        int max_prod=INT_MIN ;
        while(i<nums.size()){
            prod*=nums[i];
            max_prod=max(prod,max_prod);
             if(prod==0){
                prod=1;
            }
            i++;
        }
        return max_prod;
    }
    int maxProduct(vector<int>& nums) {
        return max(max_left(nums),max_right(nums));
    }
};