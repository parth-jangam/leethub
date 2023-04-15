class Solution {
public:
    int summi(vector<int>& arr, vector<vector<int>>& queries,int i){
        int p=queries[i][0];
        int q=queries[i][1];
        int anss=0;
        while(p<=q){
            anss=anss^arr[p];
            p++;
        }
        return anss;
    }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            ans.push_back(summi(arr,queries,i));
        }
        return ans;
    }
};