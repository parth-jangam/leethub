class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>v;
        for(int i=0;i<difficulty.size();i++){
            v.push_back({profit[i],difficulty[i]});
        }
        sort(v.begin(),v.end());
        
        reverse(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<worker.size();i++){
            int j=0;
            
            while(j<v.size() && worker[i]<v[j].second){
                j++;
            }
            if(j>=v.size()){
                ans=ans+0;
            }
            else{
                ans=ans+ v[j].first;
            }
            
        }
        return ans;
        
    }
};