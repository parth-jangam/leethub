class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()>haystack.length())return -1;
        
        int i=0;
        int j=0;
        int ans=-1;
        // bool flag=0;
        string temp="";
        while(i<needle.length()){
            temp+=haystack[i];
            i++;
        }
        if(temp==needle){
            return 0;
        }
        while(i<haystack.length()){
            temp+=haystack[i];
            temp.erase(temp.begin());
            j++;
            i++;
            if(temp==needle){
                return j;
            }
        }
        return -1;
    }
};