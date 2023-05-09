class Solution {
public:
    int minOperations(int n) {
        int mean;
        if(n%2==0){
            mean=((2*(n/2)+1)+(2*((n/2)-1)+1))/2;
        }
        else{
            mean=2*(n/2)+1;
        }
        int i=1;
        int j=1;
        int ans=0;
        while(i<mean){
            ans+=mean-i;
            i=2*j+1;
            j++;
        }
        return ans;
    }
};