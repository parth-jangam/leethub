class Solution {
public:
     int removeElement(vector<int>& nums, int val) {
        int p=nums.size();
        int i=0;
      
        
        

        while(p>i){
            if(nums[i]==val){
                // nums[i] = nums[p - 1];
                nums.erase(nums.begin()+i);
                p--;
                
            }
            else{
            i++;
            }
            
        }
        
        return p;
//         int length = nums.size(), index = 0;
// 		while ( index < length )
// 		{
// 			 if ( nums[index] == val )
// 			 {
// 				 nums[index] = nums[length - 1];
// 				 -- length;
// 			 }
				
// 			else ++index;
// 		}
// 		 return length;
    }
};