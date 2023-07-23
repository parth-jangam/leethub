class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        
        unordered_map<int,vector<int>>mappe;
        int i=0;
        while(i<nums2.size()){
            mappe[nums2[i]].push_back(i);
            i++;
        }
        int maxi=0;
        // cout<<"hello";
        for(int i=0;i<nums1.size();i++){
            if(mappe[nums1[i]].size()>0){
                for(auto x:mappe[nums1[i]]){
                    int ind=x;
                    if(maxi>=nums2.size()-ind){
                        continue;
                    }
                    int count=0;
                    int k=i;
                    
                    while(ind<nums2.size() && k<nums1.size() && nums2[ind]==nums1[k]){
                        ind++;
                        k++;
                        count++;
                    }
                    maxi=max(maxi,count);
                }
            }
        }
        return maxi;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         queue<int>q;
//         int i=0;
//         int maxi=0;
//         while(i<nums1.size()){
//             // queue<int>q;
//             // q.push(nums1[i]);
//             // cout<<i<<endl;
//             int j=0;
//             while(j<nums2.size()){
//                 while(j<nums2.size() && nums2[j]!=nums1[i]){
//                     j++;
//                 }
                
//                 if(j==nums2.size()){
//                 // q.pop();
                    
//                     break;
//                 }
//                 else{
//                     int k=i;
//                     int l=j;
//                     int count=0;
//                     while(k<nums1.size() && l<nums2.size() && nums1[k]==nums2[l]){
//                         count++;
//                         l++;
//                         k++;
//                     }
//                     maxi=max(maxi,count);
                    
//                 }
//                 j++;
//             }
//             i++;
//         }
//         return maxi;
    }
};