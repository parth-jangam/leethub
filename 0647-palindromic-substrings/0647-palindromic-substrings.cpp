class Solution {
public:
    bool is_palindrome(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length()-1;i++){
            for(int j=s.length()-1;j>i;j--){
                if(is_palindrome(s,i,j))count++;
            }
        }
        return count+s.length();
    }
};