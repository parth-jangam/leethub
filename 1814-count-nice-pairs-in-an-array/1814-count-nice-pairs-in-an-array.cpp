class Solution {
public:
    int reverse(int num){
        vector<int>dig;
        while(num>0){
            int n=num%10;
            num=num/10;
            dig.push_back(n);
        }
        int power=dig.size()-1;
        int ans=0;
        int i=0;
        while(i<dig.size()){
            ans+=(dig[i]*pow(10,power));
            power--;
            i++;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        vector<int>rev;
        int i=0;
        while(i<nums.size()){
            int ans=reverse(nums[i]);
            rev.push_back(ans);
            i++;
        }
        // cout<<rev[3]<<endl;
        // return 0;
        vector<int>diff;
        i=0;
        while(i<nums.size()){
            diff.push_back(nums[i]-rev[i]);
            i++;
        }
        unordered_map<int,int>mappe;
        int count=0;
        i=diff.size()-1;
        while(i>=0){
            count=(count+mappe[diff[i]])%1000000007;
            mappe[diff[i]]++;
            
            i--;
        }
        return count%1000000007;
        
    }
};