class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        int n=adjacentPairs.size();
        // vector<int>adj[n+1];
        map<int,vector<int>>mappe;
        
        for(int i=0;i<n;i++){
            mappe[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            mappe[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
            
        }
        vector<int>ans;
        vector<int>::iterator it;
        int start;
        for(auto x:mappe){
            if(x.second.size()==1){
                start=x.first;
                break;
            }
        }
        ans.push_back(start);
        int first=mappe[start][0];
        ans.push_back(first);
        // cout<<"hello";
        while(true){
            if(mappe[first].size()==1){
                break;
            }
            if(start==mappe[first][0]){
                ans.push_back(mappe[first][1]);
                start=first;
                first=mappe[first][1];
                // start=first;
            }
            else{
                ans.push_back(mappe[first][0]);
                start=first;
                first=mappe[first][0];
            }
            // ans.push_back()
        }
        return ans;
    }
};