class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>mappe;
        for(int i=0;i<paths.size();i++){
            mappe[paths[i][0]]+=1;
            mappe[paths[i][1]]+=0;
            
        }
        for(auto x:mappe){
            if(x.second==0){
                return x.first;
            }
        }
        return "";
    }
};