class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>>mappe;
        int i=0;
        while(i<logs.size()){
            mappe[logs[i][0]].insert(logs[i][1]);
            i++;
        }
        unordered_map<int,int>mappe1;
        vector<int>ans(k,0);
        for(auto x:mappe){
            int a=x.first;
            set<int>temp=x.second;
            int m=temp.size();
            mappe1[m]++;
        }
        for(auto x:mappe1){
            int a=x.first;
            int b=x.second;
            ans[a-1]=b;
            
        }
        return ans;
    }
};