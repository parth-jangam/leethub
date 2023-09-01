class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp=nums2;
        reverse(temp.begin(),temp.end());
        int maxi=0;
        for(int i=0;i<nums1.size();i++){
            vector<int>::iterator it;
            it=lower_bound(temp.begin(),temp.end(),nums1[i]);
            int ind=it-temp.begin();
            int ind2=((nums2.size()-1)-ind);
            maxi=max(maxi,ind2-i);
        }   
        return maxi;
    }
};