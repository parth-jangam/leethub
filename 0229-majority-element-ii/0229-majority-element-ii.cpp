class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mappe;
        int i=0;
        while(i<nums.size()){
            mappe[nums[i]]++;
            i++;
        }
        int n=nums.size()/3;
        vector<int>ans;
        for(auto x:mappe){
            if(x.second>n){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};