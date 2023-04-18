class Solution {
public:
    int find_factor(int num,int count){
        int sum=0;
        for(int i=1;i<=sqrt(num);i++){
            if(num%i==0){
                if(num/i==i){
                    count++;
                    sum+=i;
                }
                else{
                    count+=2;
                    sum+=i;
                    sum+=(num/i);
                }
                
                
            }
        }
        if(count==4){
            return sum;
        }
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=find_factor(nums[i],0);
        }
        return ans;
    }
};