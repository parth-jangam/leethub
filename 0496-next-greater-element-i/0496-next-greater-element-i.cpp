class Solution {
public:
    void stack_operation(vector<int>&ans,stack<int>&s,int num){
        if(s.empty()){
            ans.insert(ans.begin(),-1);
            
            return;
        }
        if(s.top()>num){
            ans.insert(ans.begin(),s.top());
            
            return;
        }
        int a= s.top();
        s.pop();
        stack_operation(ans,s,num);
        s.push(a);
        
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mappe;
        // int i=0;
        // while(i<nums2.size()){
        //     mappe[nums2[i]]=i;
        //     i++;
        // }
        
        
        vector<int>ans;
        stack<int>s;
        int m=nums2.size()-1;
        for(int i=m;i>=0;i--){
            stack_operation(ans,s,nums2[i]);
            mappe[nums2[i]]=ans[0];
            s.push(nums2[i]);
        }
        int i=0;
        ans.clear();
        while(i<nums1.size()){
            ans.push_back(mappe[nums1[i]]);
            i++;
        }
        return ans;
        
    }
};