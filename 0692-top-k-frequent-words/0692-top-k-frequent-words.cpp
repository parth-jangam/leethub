class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mappe;
        priority_queue<pair<int,string>>q;
        int i=0;
        while(i<words.size()){
            mappe[words[i]]++;
            i++;
        }
        for(auto x:mappe){
            q.push({x.second,x.first});
            
        }
        vector<string>ans;
        vector<string>temp;
        i=0;
        int prev=q.top().first;
        while(!q.empty()){
            if(prev==q.top().first){
                while(!q.empty() && prev==q.top().first){
                    temp.push_back(q.top().second);
                    q.pop();
                }
                
            }
            // else{
                bool flag=0;
                int j=temp.size()-1;
                while(j>=0){
                    ans.push_back(temp[j]);
                    k--;
                    if(k==0){
                        flag=1;
                        temp.clear();
                        break;
                    }
                    j--;
                }
                if(flag==1){
                    break;
                }
                temp.clear();
                prev=q.top().first;
                continue;
            // }
            // ans.push_back(q.top().second);
            // q.pop();
            i++;
        }
        int j=temp.size()-1;
        while(j>=0){
            ans.push_back(temp[j]);
            j--;
        }
   
        return ans;
    }
};