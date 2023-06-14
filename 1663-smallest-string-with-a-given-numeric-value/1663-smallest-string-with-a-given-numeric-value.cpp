class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans="";
        string alfa="abcdefghijklmnopqrstuvwxyz";
        // if(26*n<k){
        //     return "";
        // }
        while(n>0){
            if((n-1)*26>k-1){
                ans+="a";
                k=k-1;
            }
            else{
                int rem=k%26;
                int div=k/26;
                if(rem!=0){
                    ans+=alfa[rem-1];
                }
                while(div>0){
                    ans+=alfa[25];
                    div--;
                }
                break;
            }
            n--;
        }
        return ans;
    }
};