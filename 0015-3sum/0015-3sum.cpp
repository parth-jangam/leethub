// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>>ans;
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int j=i+1;
//             int k=nums.size()-1;
//             while(j<k){
//                 if(nums[i]+nums[j]+nums[k]==0){
//                     ans.push_back({nums[i],nums[j],nums[k]});
//                     while(j<k && nums[j]==nums[j+1])j++;
//                     while(j<k && nums[k]==nums[k-1])k--;
//                     j++;
//                     k--;
//                 }
//                 else{
//                     if(nums[i]+nums[j]+nums[k]>0){
//                         k--;
//                     }
//                     else{
//                         j++;
//                     }
//                 }
//             }
//             while(i<n-1 && nums[i]==nums[i+1]){
//                 i++;
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    
                    while(l<r && nums[l]==nums[l+1]){
                        l++;
                    }
                    while(l<r && nums[r]==nums[r-1]){
                        r--;
                    }
                    l++;
                    r--;
                }
                else{
                    if(nums[i]+nums[l]+nums[r]>0){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
            }
            while(i<nums.size()-1 && nums[i]==nums[i+1]){
                i++;
            }
        }
        return ans;
    }
};