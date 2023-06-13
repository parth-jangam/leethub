class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        //
        // cout<<grid[0][1];
        vector<vector<int>>temp;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<n;i++){
            
            vector<int>temp1;
            for(int j=0;j<m;j++){
                temp1.push_back(grid[j][i]);
            }
            temp.push_back(temp1);
        }
        // sort(temp.begin(),temp.end());
        // sort(grid.begin(),grid.end());
        int count=0;
       for(int i=0;i<grid.size();i++){
            for(int j=0;j<temp.size();j++){
                if(grid[i]==temp[j]){
                    count++;
                }
            }
       }
        return count;
    }
};