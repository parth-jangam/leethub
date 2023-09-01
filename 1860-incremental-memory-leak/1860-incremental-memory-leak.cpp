class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        vector<int>ans;
        int i=1;
        while(memory1>=i || memory2>=i){
            if(memory1>=memory2){
                memory1-=i;
            }
            else{
                memory2-=i;
            }
            i++;
            
        }
        ans.push_back(i);
        ans.push_back(memory1);
        ans.push_back(memory2);
        return ans;
    }
};