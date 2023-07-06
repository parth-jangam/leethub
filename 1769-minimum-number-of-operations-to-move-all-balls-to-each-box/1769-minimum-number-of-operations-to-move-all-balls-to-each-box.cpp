class Solution {
public:
    vector<int> minOperations(string boxes) {
        unordered_map<int,bool>mappe;
        int i=0;
        while(i<boxes.length()){
            if(boxes[i]=='1'){
                mappe[i]=true;
            }
            i++;
        }
        i=0;
        vector<int>ans;
        while(i<boxes.length()){
            int count=0;
            for(auto x:mappe){
                int f=x.first;
                if(f!=i){
                    count=count+abs(i-f);
                }
            }
            
            ans.push_back(count);
            i++;
        }
        return ans;
    }
};