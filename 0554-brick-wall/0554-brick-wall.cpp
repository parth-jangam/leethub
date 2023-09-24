class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int>mappe;
        for(int i=0;i<wall.size();i++){
            int temp=0;
            for(int j=0;j<wall[i].size()-1;j++){
                temp+=wall[i][j];
                mappe[temp]++;
            }
        }
        int maxi=0;
        for(auto x:mappe){
            maxi=max(maxi,x.second);
        }
        return wall.size()-maxi;
    }
};