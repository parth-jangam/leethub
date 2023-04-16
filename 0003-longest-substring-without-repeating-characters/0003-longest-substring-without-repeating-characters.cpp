class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char,bool>check;
        queue<char>q;
        int count=0;
        int i=0;
        int maxi=INT_MIN;
        if(s.size()==0){
            return 0;
        }
        while(i<s.size()){
            if(check[s[i]]==true){
                while(q.front()!=s[i] && !q.empty()){
                    check[q.front()]=false;
                    q.pop();

                }
                q.pop();
                q.push(s[i]);
                i++;
                
                count=q.size();
                

            }
            else{
                q.push(s[i]);
                check[s[i]]=true;
                i++;
                count++;
               
            }
             maxi=max(maxi,count);

        }
        return maxi;
    }
};