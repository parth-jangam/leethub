class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        unordered_map<string,long long>m1;
        unordered_map<string,long long>m2;
        int i=0;
        long long maxi=0;
        while(i<creators.size()){
            m1[creators[i]]+=views[i];
            maxi=max(maxi,m1[creators[i]]);
            if(m2.find(creators[i])!=m2.end()){
                if(views[m2[creators[i]]]<=views[i] ){
                    if(views[m2[creators[i]]]<views[i]){
                        m2[creators[i]]=i;
                    }
                    else{
                        if(views[m2[creators[i]]]==views[i] && ids[m2[creators[i]]]>ids[i]){
                            m2[creators[i]]=i;
                        }
                    }
                }
            }
            else{
                m2[creators[i]]=i;
            }
            i++;
        }
        vector<vector<string>>ans;
        for(auto x:m1){
            if(x.second==maxi){
                vector<string>temp;
                temp.push_back(x.first);
                int z=m2[x.first];
                temp.push_back(ids[z]);
                ans.push_back(temp);
            }
            
        }
        return ans;
    }
};