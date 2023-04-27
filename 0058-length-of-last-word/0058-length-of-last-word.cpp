class Solution {
public:
     int lengthOfLastWord(string s) {
        int i=0;
        int n=s.length();
        int len=0;
        int ans;
        while(i<n){
            if(s[i]==' '){
                len=0;
            }
            else{
                len+=1;
                ans=len;
            }
            i++;
        }
        return ans;
    }
};