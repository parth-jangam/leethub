class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int,int>mappe;
        for(int i=0;i<nums3.size();i++){
            for(int j=0;j<nums4.size();j++){
                int temp=nums3[i]+nums4[j];
                mappe[temp]++;
            }
        }
        int count=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int temp=nums1[i]+nums2[j];
                int target=-(temp);
                count+=mappe[target];
                // mappe[temp]++;
            }
        }
        return count;
    }
};