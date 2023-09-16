class Solution {
public:
    int bulbSwitch(int n) {
        // int sqr=0;
        int count=0;
        int i=1;
        while(true){
            if(i*i<=n){
                count++;
            }
            else{
                break;
            }
            i++;
        }
        return count;
    }
};