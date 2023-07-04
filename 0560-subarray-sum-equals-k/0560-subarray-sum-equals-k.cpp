class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mappe;
        int sum=0;
        // mappe[0]=1;
        int i=0;
        int count=0;
        while(i<nums.size()){
            sum+=nums[i];
            if(sum==k){
                count++;
                count+=mappe[0];
            }
            else{
                int check1=sum-k;
                // int check2=sum+k;
                if(mappe[check1]!=0){
                    count+=mappe[check1];
                }
                
            }
            mappe[sum]++;
            i++;
        }
        return count;
    }
};