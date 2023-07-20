class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mappe;
        int i=0;
        queue<int>q;
        int count=0;
        int max_len=0;
        while(i<fruits.size()){
            if(mappe[fruits[i]]>0){
                q.push(fruits[i]);
                mappe[fruits[i]]++;
                i++;
            }
            else{
                if(count<2){
                    q.push(fruits[i]);
                    mappe[fruits[i]]++;
                    count++;
                    i++;
                }
                else{
                    // max_len=max(max_len,q.size());
                    while(mappe[q.front()]!=1){
                        mappe[q.front()]--;
                        q.pop();
                        
                    }
                    mappe[q.front()]--;
                    q.pop();
                    count--;
                }
            }
            if(max_len<q.size()){
                max_len=q.size();
            }
            // max_len=max(max_len,q.size());
        }
        return max_len;
    }
};