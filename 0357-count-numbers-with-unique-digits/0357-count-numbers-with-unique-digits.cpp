class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
         if(n==0){
            return 1;
        }
        if(n==1){
            return 10;
        }
        int sum=10; int temp=9 ;int cal=9;
        for(int i=0;i<n-1;i++){
            cal*=temp;
            sum+=cal;
            temp--;
        }
        return sum; 
    }
};