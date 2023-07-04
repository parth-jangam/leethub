class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mappe;
	    
	    int sum=0;
	    int i=0;
	    // mappe[0]=-1;
	    i=0;
	    // int maxi=0;
        int count=0;
	    while(i<nums.size()){
	        sum+=nums[i];
	        int rem=sum%k;
	       if(sum<0){
	           if(rem)rem+=k; 
	        }
	        
	       if(mappe[rem]==0){
               if(rem==0){
                   count++;
               }
	           mappe[rem]++;
	           
	       }
	       else{
	           //if(rem!=0){
               if(rem==0){
                    count++;
               }
               count+=mappe[rem];
               mappe[rem]++;
	                // maxi=max(maxi,i-mappe[rem]);    
	           //}
	           
	       }
	        
	        i++;
	    }
	    return count;

    }
};