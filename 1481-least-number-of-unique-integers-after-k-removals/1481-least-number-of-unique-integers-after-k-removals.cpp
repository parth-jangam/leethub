class Solution {
public:
        int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int ,int>mappe;
        int i=0;
        while(i<arr.size()){
            mappe[arr[i]]++;
            i++;
        }
        priority_queue <int, vector<int>, greater<int>> q;
        for(auto x:mappe){
            q.push(x.second);
        }    
        while(!q.empty() && k>0){
            k=k-q.top();
            if(k>=0){
                q.pop();
            }
            
        }
        return q.size();
        
        
    }
};