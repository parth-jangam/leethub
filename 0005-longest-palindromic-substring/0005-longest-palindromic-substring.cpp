class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()==0 || s.length()==1){
            return s;
        }
        int h,e;
        int start=0,end=0;
        int maxi=0;
        for(int i=1;i<s.length();i++){
            h=i-1;
            e=i;
            while(h>=0 && e<s.length() && s[h]==s[e]){
                if(e-h+1>maxi){
                    maxi=e-h+1;
                    start=h;
                    end=e;
                }
                e++;
                h--;
            }

        }
        for(int i=1;i<s.length();i++){
            h=i-1;
            e=i+1;
            while(h>=0 && e<s.length() && s[h]==s[e]){
                if(e-h+1>maxi){
                    maxi=e-h+1;
                    start=h;
                    end=e;
                }
                e++;
                h--;
            }
            
        }
        string ans="";
        for(int i=start;i<=end;i++){
            ans+=s[i];
        }
        return ans;
    }
};