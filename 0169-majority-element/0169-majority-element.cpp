class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mappe;
        int i=0;
        while(i<nums.size()){
            mappe[nums[i]]++;
            i++;
        }
        int maxi=0;
        int ans;
        for(auto x:mappe){
            if(x.second>maxi){
                maxi=x.second;
                ans=x.first;
            }
            
        }
        return ans;
    }
};