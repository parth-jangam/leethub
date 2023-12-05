class Solution {
public:
    int numberOfMatches(int n) {
        int team=0;
        while(n!=1){
            if(n%2==0){
                team+=(n/2);
                n/=2;
            }
            else{
                team+=((n-1)/2);
                n=((n-1)/2)+1;
            }
        }
        return team;
    }
};