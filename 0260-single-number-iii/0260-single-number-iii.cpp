class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        vector<int>parth;
        int i;
        int j;
        for(i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                parth.push_back(nums[i-1]); 
                 if(i==n-1){
                    parth.push_back(nums[i]);
                     return parth;
                }
                 j=i;
            }
           
            else{
                i++;
                j=i;
            }
        }
        if(j==n-1){
        parth.push_back(nums[j]);
        }
        return parth;
    }
};