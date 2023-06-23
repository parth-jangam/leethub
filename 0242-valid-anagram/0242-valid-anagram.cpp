class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>mappe;
        int i=0;
        while(i<s.length()){
            mappe[s[i]]++;
            i++;
        }
        i=0;
        while(i<t.length()){
            if(mappe[t[i]]==0){
                return false;
            }
            mappe[t[i]]--;
            i++;
        }
        return true;
    }
};