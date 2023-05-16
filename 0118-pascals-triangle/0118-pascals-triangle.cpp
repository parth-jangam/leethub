class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows==1){
            return ans;
        }
        ans.push_back({1,1});
        if(numRows==2){
            return ans;
        }
        int i=1;
        
        
        while(i<numRows-1){
            int j=1;
            vector<int>temp;
            temp.push_back(1);
            temp.push_back(1);
            while(j<ans[i].size()){
                temp.insert(temp.begin()+j,ans[i][j]+ans[i][j-1]);
                j++;
            }
            i++;
            ans.push_back(temp);
        }
        return ans;
    }
};