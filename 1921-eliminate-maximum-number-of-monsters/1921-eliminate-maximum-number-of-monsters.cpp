class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int>ans;
        for(int i=0;i<dist.size();i++){
            if(dist[i]%speed[i]==0){
                ans.push_back(dist[i]/speed[i]);
            }
            else{
                ans.push_back((dist[i]/speed[i])+1);
            }
        }
        sort(ans.begin(),ans.end());
        int i=0;
        int j=0;
        int count=0;
        while(i<ans.size()){
            if(j>=ans[i])return j;
            i++;
            j++;
        }
        return speed.size();
    }
};