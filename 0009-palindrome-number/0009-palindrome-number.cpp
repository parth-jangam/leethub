class Solution {
public:
   bool isPalindrome(int x) {
        int i=0;
        int arr[50];
        if(x<0){
            return false;
        }
        while(x>0){
            int n=x%10;
            arr[i]=n;
            x=x/10;
            i++;
        }
        
    int j=0;
    while(i-1>j){
        if(arr[i-1]!=arr[j]){
            return false;
            
            
        }
        i--;
        j++;
    }
    return true;
        
        
    }
};