class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        sort(nums.begin(),nums.end());
        vector<int>::iterator it;
        // if(nums.si)
        int n=nums.size();
        int count=0;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<i;j++){
                int target=nums[i]-nums[j];
                // cout<<target<<" ";
                vector<int>::iterator low1;
      
    
                low1 = std::upper_bound(nums.begin(), nums.end(), target);    
                int pos=low1-nums.begin();
                // cout<<pos<<endl;
                // if(pos>j)pos=pos-1;
                // cout<<" "<<j+1<<" "<<pos<<endl;
                int temp=max(j+1,pos);
                // cout<<i<<endl;
                // cout<<temp<<endl;
                if(i-temp>0){
                    count=count+(i-temp);
                }
                // if(count<0)count=0;
                // cout<<count<<endl;
                // while(nums[j]==nums[j+1]){
                //     j++;
                // }   
            }
            // while(nums[i]==nums[i-1]){
            //         i--;
            // }
        }
        if(count<0){
            return 0;
        }
        return count;
    }
};