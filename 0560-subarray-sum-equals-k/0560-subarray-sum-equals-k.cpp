class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mappe;
        int sum=0;
        mappe[0]=1;
        int i=0;
        int count=0;
        while(i<nums.size()){
            sum+=nums[i];
            int dig=sum-k;
            count+=mappe[dig];
            mappe[sum]++;
            //     int check1=sum-k;
            //     int check2=sum+k;
            //     if(mappe[check1]!=0){
            //         count+=mappe[check1];
            //     }
            //     if(check1!=check2 && mappe[check2]!=0){
            //         count+=mappe[check2];
            //     }
            // }
            // mappe[sum]++;
            i++;
        }
        return count;
    }
};