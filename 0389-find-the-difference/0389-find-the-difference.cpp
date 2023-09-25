class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mappe;
        int i=0;
        while(i<s.length()){
            mappe[s[i]]++;
            i++;
        }
        i=0;
        while(i<t.length()){
            if(mappe[t[i]]==0){
                return t[i];
            }
            mappe[t[i]]--;
            i++;
        }
        return t[0];
    }
};