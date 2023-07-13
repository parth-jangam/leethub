class Solution {
public:
    bool is_subset(string s,string y){
        int i=0;
        int j=0;
        while(i<s.length() && j<y.length()){
            if(s[i]==y[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        if(j==y.length()){
            return true;
        }
        return false;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int>mappe;
        int i=0;
        while(i<words.size()){
            mappe[words[i]]++;
            i++;
        }
        int count=0;
        for(auto x:mappe){
            if(is_subset(s,x.first)){
                count+=x.second;
            }
        }
        return count;
    }
};