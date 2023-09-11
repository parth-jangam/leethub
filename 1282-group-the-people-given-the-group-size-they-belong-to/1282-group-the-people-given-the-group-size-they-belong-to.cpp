class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<pair<int,int>>inp;
        for(int i=0;i<groupSizes.size();i++){
            inp.push_back({groupSizes[i],i});
        }
        sort(inp.begin(),inp.end());
        
        vector<vector<int>>ans;
        int i=0;
        while(i<inp.size()){
            // int j=0;
            vector<int>temp;
            int size=i+inp[i].first;
            while(i<size){
                temp.push_back(inp[i].second);
                i++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};