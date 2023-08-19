class Solution {
public:
    bool halvesAreAlike(string s) {
        int l=s.length();
        int m=l/2;
        int i=0;
        int count1=0;
        while(i<m){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o' || s[i]== 'u'||s[i]=='A' || s[i]=='E' || s[i]== 'I'|| s[i]== 'O'|| s[i]=='U'){
                count1++;
            }
            i++;
        }
        int count=0;
        while(i<l){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o' || s[i]== 'u'||s[i]=='A' || s[i]=='E' || s[i]== 'I'|| s[i]== 'O'|| s[i]=='U'){
                count++;
            }
            i++;
        }
        if(count==count1){
            return true;
        }
        return false;
    }
};