class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        queue<char>q;
        int i=0;
        int ans=0;
        // int max_ans=0;
        unordered_map<char,bool>mappe;
        while(i<s.length()){
            if(!mappe[s[i]]){
                q.push(s[i]);
                mappe[s[i]]=true;
                // ans++;
            }
            else{
                while(q.front()!=s[i]){
                    mappe[q.front()]=false;
                    q.pop();
                    
                }
                q.pop();
                q.push(s[i]);
            }
            
            int n=q.size();
            ans=max(ans,n);
            i++;
        }
        return ans;
    }
};