class Solution {
public:
   int numberOfSubstrings(string s) {
        unordered_map<char,int>mappe;
        int i=0;
        int j=0;
        int count=0;
        int n=s.length();
        while(j<s.length()){
            mappe[s[j]]++;
            if(mappe['a']>0 && mappe['b']>0 && mappe['c']>0){
                while(mappe['a']>0 && mappe['b']>0 && mappe['c']>0){
                    
                    count+=(n-j);
                    if(s[i]=='a')mappe['a']--;
                    if(s[i]=='b')mappe['b']--;
                    if(s[i]=='c')mappe['c']--;
                    i++;
                }
                
            }
            j++;
        }
       return count;
    }
};