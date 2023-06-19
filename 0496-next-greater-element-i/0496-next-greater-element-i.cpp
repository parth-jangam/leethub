class Solution {
public:
    int maxi(stack<int>&s,int i){
        if(s.empty()){
            s.push(i);
            return -1;
        }
        while(!s.empty() && s.top()<i){
            s.pop();
        }
        if(s.empty()){
            s.push(i);
            return -1;
        }
        int ans=s.top();
        s.push(i);
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mappe;
        stack<int>s;
        // mappe[nums2[nums2.size()-1]]=-1;
        // s.push(nums2[nums2.size()-1]);
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            int a=maxi(s,nums2[i]);
            mappe[nums2[i]]=a;
        }
        vector<int>ans;
        int j=0;
        while(j<nums1.size()){
            ans.push_back(mappe[nums1[j]]);
            j++;
        }
        return ans;
    }
};