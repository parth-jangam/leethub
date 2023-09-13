class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<pair<int,int>>v;
        for(int i=0;i<ratings.size();i++){
            v.push_back({ratings[i],i});
        }   
        sort(v.begin(),v.end());
        int i=0;
        int n=ratings.size();
        vector<int>candy(n,-1);
        while(i<v.size()){
            int r=v[i].first;
            int j=v[i].second;
            if(candy[j]==-1){
                candy[j]=1;
                if(j-1>=0 && candy[j-1]==-1 && ratings[j-1]>ratings[j]){
                    candy[j-1]=candy[j]+1;
                }
                 if(j+1<n && candy[j+1]==-1 && ratings[j+1]>ratings[j]){
                    candy[j+1]=candy[j]+1;
                }
                
            }
            else{
                if(j-1>=0 && candy[j-1]==-1 && ratings[j-1]>ratings[j]){
                    candy[j-1]=candy[j]+1;
                }
                 if(j+1<n && candy[j+1]==-1 && ratings[j+1]>ratings[j]){
                    candy[j+1]=candy[j]+1;
                }   
                if(j-1>=0 && ratings[j-1]>ratings[j] && candy[j]>=candy[j-1]){
                    candy[j-1]=candy[j]+1;
                }
                if(j+1<n && ratings[j+1]>ratings[j] && candy[j]>=candy[j+1]){
                    candy[j+1]=candy[j]+1;
                }
            }
            i++;
        }
        i=0;
        int ans=0;
        while(i<candy.size()){
            ans+=candy[i];
            i++;
        }
        return ans;
    }
};