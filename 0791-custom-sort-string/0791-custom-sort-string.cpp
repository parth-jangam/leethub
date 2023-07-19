class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mappe;
        int trav=0;
        while(trav<s.length()){
            mappe[s[trav]]++;
            trav++;
        }
        string ans="";
        int i=0;
        while(i<order.length()){
            while(mappe[order[i]]>0){
                ans+=order[i];
                mappe[order[i]]--;
            }
            i++;
        }
        for(auto x:mappe){
            if(x.second>0){
                int a=x.second;
                while(a>0){
                    ans+=x.first;
                    a--;
                }
            }
        }
        return ans;
    }
};