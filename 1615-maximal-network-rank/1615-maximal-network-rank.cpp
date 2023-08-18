class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>inp(n+1,0);
        vector<int>adj[n];
        for(int i=0;i<roads.size();i++){
            inp[roads[i][0]]++;
            inp[roads[i][1]]++;
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        }
        vector<int>::iterator it;
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x;
                it=find(adj[i].begin(),adj[i].end(),j);
                if(it!=adj[i].end()){
                    x=(inp[i]+inp[j])-1;    
                }
                else{
                    x=(inp[i]+inp[j]);
                }
                
                maxi=max(x,maxi);
            }
        }
        return maxi;
    }
};