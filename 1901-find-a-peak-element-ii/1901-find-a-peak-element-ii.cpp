class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
       vector<vector<int>>p=mat;
        for(int i=0;i<p.size();i++){
            sort(p[i].begin(),p[i].end());
        }
        int maxi=0;
        int n=p[0].size()-1;
        
        for(int i=0;i<p.size();i++){
           
            maxi=max(maxi,p[i][n]);
        }
        vector<int>ans;
       
        for(int i=0;i<mat.size();i++){
            vector<int>::iterator it;
            it=lower_bound(p[i].begin(),p[i].end(),maxi);
             // cout<<it-mat[i].begin()<<endl;
            if(it==p[i].end()){
                continue;
            }
            else{
                int k=0;
                while(mat[i][k]!=maxi){
                    k++;
                }
                // int ind=it-mat[i].begin();
                ans.push_back(i);
                ans.push_back(k);
                return ans;
            }
        }
        return ans;
    }
};