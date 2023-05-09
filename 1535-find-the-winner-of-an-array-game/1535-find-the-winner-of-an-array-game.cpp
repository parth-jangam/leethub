class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int curr=arr[0];
        int count=0;
        for(int i=1;i<arr.size();i++){
            
            if(arr[i]>curr){
                count=0;
                curr=arr[i];
            }
            count++;
            if(count==k){
                break;
            }
        }
        return curr;
    }
};