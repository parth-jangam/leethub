class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()==1)return false;
        unordered_map<int,int>mappe;
        int sum=0;
        int count=0;
        int prev_temp=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]==0){
                count++;
                if(count==2)return true;
                continue;
            }
            count=0;
            int temp=sum%k;
            if(sum%k==0 && i+1>1)return true;
            
            
            if(mappe.find(temp)!=mappe.end()){
                int prev=mappe[temp];
                if(i-prev>1){
                    return true;
                }
            }
            
            mappe[temp]=i;
        }
        return false;
    }
};