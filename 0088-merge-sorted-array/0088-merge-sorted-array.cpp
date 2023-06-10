class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int sum=m+n;
        while(j<n && i<m){
            if(nums1[i]>nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                i++;j++;
                m++;
            }
            else{
                i++;
            }
        }
        while(j<n){
            nums1.insert(nums1.begin()+i,nums2[j]);
            // m=m+1;
            i++;
            j++;
        }
          n=nums1.size()-1;
        while(nums1.size()>sum){
            nums1.erase(nums1.begin()+n);
            n--;
        }
    }
    // void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     int i=0;
    //     int j=0;
    //     cout<<nums1.size()<<endl;
    //     int sum=n+m;
    //     while(j<n && i<m){
    //         if(nums1[i]>nums2[j]){
    //             nums1.insert(nums1.begin()+i,nums2[j]);
    //             j++;
    //             i++;
    //             m++;
    //         }
    //         else{
    //             i++;
    //         }
    //     }
    //     while(j<n){
    //         nums1.insert(nums1.begin()+i,nums2[j]);
    //         i++;
    //         j++;
    //     }
    //     n=nums1.size()-1;
    //     while(nums1.size()>sum){
    //         nums1.erase(nums1.begin()+n);
    //         n--;
    //     }
    // }
};