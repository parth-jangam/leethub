class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<long long,long long >mappe;
        int i=0;
        while(i<nums1.size()){
            
            long long a=(long long)nums1[i]*nums1[i];
            mappe[a]++;
            i++;
        }
        int count=0;
        for(int i=0;i<nums2.size()-1;i++){
            for(int j=i+1;j<nums2.size();j++){
                
                long long p=(long long) nums2[i]*nums2[j];
                count+=mappe[p];
            }
        }
        mappe.clear();
        i=0;
        while(i<nums2.size()){
            long long p=(long long)nums2[i]*nums2[i];
            mappe[p]++;
            i++;
        }
       
        for(int i=0;i<nums1.size()-1;i++){
            for(int j=i+1;j<nums1.size();j++){
                
                long long p=(long long)nums1[i]*nums1[j];
                count+=mappe[p];
            }
        }
        return count;
        
    }
};