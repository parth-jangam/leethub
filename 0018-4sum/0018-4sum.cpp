class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        if(n<4){
            return ans;
        }
        
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int k=j+1;
                int l=n-1;
                while(k<l){
                    if((long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l]==target){

                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        int th=nums[k];
                        int fo=nums[l];
                        while(k<l && th==nums[k])k++;
                        while(k<l && fo==nums[l])l--;
                        // k++;
                        // l--;
                    }
                    else{
                        if((long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l]>target){
                            l--;
                        }
                        else{
                            k++;
                        }
                    }
                }
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            while(i+1<n && nums[i+1]==nums[i])++i;
        }
        int i=1;
        // sort(ans.begin(),ans.end());
        // while(i<ans.size()){
        //     if(ans[i]==ans[i-1]){
        //         ans.erase(ans.begin()+i);
        //         continue;
        //     }
        //     i++;
        // }
        return ans;
    }
};