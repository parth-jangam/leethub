class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int j=0;
        for(int i=1;i<strs.size();i++){
            while(j<ans.size() && j<strs[i].size() && strs[i][j]==ans[j]){
                j++;
            }
            if(j==0){
                return "";
            }
            ans.erase(j,ans.size()-1);
            j=0;
        }
        return ans;
    }
};