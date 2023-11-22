#include<bits/stdc++.h>
class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>inp;
        int i=1;
        while(i<=m){
            inp.push_back(i);
            i++;
        }
        vector<int>ans;
        vector<int>::iterator it;
        i=0;
        while(i<queries.size()){
            it=find(inp.begin(),inp.end(),queries[i]);
            int pos=it-inp.begin();
            ans.push_back(pos);
            int temp=inp[pos];
            inp.erase(inp.begin()+pos);
            inp.insert(inp.begin(),temp);
            i++;
        }
        return ans;
    }
};