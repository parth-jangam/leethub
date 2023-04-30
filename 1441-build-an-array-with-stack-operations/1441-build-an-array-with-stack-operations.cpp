class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i=1;
        int j=0;
        vector<string>ans;
        while(j<target.size() && i<=n){
            if(target[j]==i){
                ans.push_back("Push");
                i++;j++;
            }
            else{
                if(target[j]>i){
                    ans.push_back("Push");
                    ans.push_back("Pop");
                    i++;
                }
            }
        }
        return ans;
    }
};