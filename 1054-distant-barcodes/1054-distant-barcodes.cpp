class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int,int>mappe;
        int i=0;
        while(i<barcodes.size()){
            mappe[barcodes[i]]++;
            i++;
        }
        priority_queue<pair<int,int>>q;
        for(auto x:mappe){
            q.push({x.second,x.first});
            
        }
        vector<int>ans;
        while(!q.empty()){
            
            if(q.top().first==0){
                break;
            }
            auto a=q.top();
            q.pop();
            ans.push_back(a.second);
            
            if(q.empty() || q.top().first==0){
                break;
            }
            auto b=q.top();
            
            a.first-=1;
           
            ans.push_back(q.top().second);
            b.first-=1;
            q.pop();
            q.push(a);
            q.push(b);
           
        }
        return ans;
    }
};