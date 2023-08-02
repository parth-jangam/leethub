class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<int>>dist(m,vector<int>(n,1e9));
        dist[0][0]=0;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        q.push({0,{0,0}});
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!q.empty()){
            int mini=q.top().first;
            int row=q.top().second.first;
            int col=q.top().second.second;
            if(row==m-1 && col==n-1){
                return mini;
            }
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n){
                    int temp=max(mini,abs(heights[nrow][ncol]-heights[row][col]));
                    if(temp<dist[nrow][ncol]){
                        dist[nrow][ncol]=temp;
                        q.push({temp,{nrow,ncol}});
                        
                    }
                }
            }
        }
        return 0;
    }
    
};