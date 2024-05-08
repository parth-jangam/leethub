class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>dummy=score;
        sort(dummy.begin(),dummy.end(),greater<int>());
        unordered_map<int,int>mappe;
        
        for(int i=0;i<dummy.size();i++){
            mappe[dummy[i]]=(i+1);
        }
        
        vector<string>ans;
                  
        for(int i=0;i<score.size();i++){
            if(mappe[score[i]]==1){
                ans.push_back("Gold Medal");
            }
            else{
                if(mappe[score[i]]==2){
                    ans.push_back("Silver Medal");
                }
                else{
                    if(mappe[score[i]]==3){
                        ans.push_back("Bronze Medal");
                    }
                    else{
                        ans.push_back(to_string(mappe[score[i]]));
                    }
                }
            }
        }
        return ans;
                  
        
    }
};