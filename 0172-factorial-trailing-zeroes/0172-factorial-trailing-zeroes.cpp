class Solution {
public:
    int trailingZeroes(int n) {
        if(n<5){
            return 0;
        }
        int count=0;
        int power=5;
        while(power<=n){
            count+=floor(n/power);
            power=power*5;
        }
        return count;
        
    }
};