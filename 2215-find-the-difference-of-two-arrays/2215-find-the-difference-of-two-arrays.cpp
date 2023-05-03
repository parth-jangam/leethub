class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        unordered_map<int,bool>mappe;
        int i=0;
        while(i<nums2.size()){
            mappe[nums2[i]]=true;
            i++;
        }
        vector<int>temp;
        i=0;
        while(i<nums1.size()){
            if(!mappe[nums1[i]]){
                temp.push_back(nums1[i]);
                mappe[nums1[i]]=true;
                
            }
            i++;
        }
        ans.push_back(temp);
        mappe.clear();
        temp.clear();
        i=0;
        while(i<nums1.size()){
            mappe[nums1[i]]=true;
            i++;
        }
        i=0;
        while(i<nums2.size()){
            if(!mappe[nums2[i]]){
                temp.push_back(nums2[i]);
                mappe[nums2[i]]=true;
            }
            i++;
        }
        ans.push_back(temp);
        return ans;
    }
};