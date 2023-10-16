class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>last;
        int i=0;
        while(i<s.length()){
            last[s[i]]=i;
            i++;
        }
        int max_occ=0;
        int count=0;
        vector<int>ans;
        i=0;
        while(i<s.length()){
            if(last[s[i]]>i){
                max_occ=max(max_occ,last[s[i]]);
                count++;
            }
            else{
                if(max_occ<=i){
                    ans.push_back(count+1);
                    count=0;
                    max_occ=0;
                }
                else{
                    count++;
                }
            }
            i++;
        }
        return ans;
    }
};