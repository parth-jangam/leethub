class Solution {
public:
    // bool is_poss(int i)
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int tar=abs(target[0])+abs(target[1]);
        for(int i=0;i<ghosts.size();i++){
            int temp=abs(ghosts[i][0]-target[0])+abs(ghosts[i][1]-target[1]);
            if(temp<=tar){
                return false;
            }
        }
        return true;
    }
};