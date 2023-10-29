class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>p;
        // int count=0;
        for(int i=0;i<s.length();i++){
            if(p.empty()){
                p.push({s[i],1});
                // count++;
            }
            else{
                if(p.top().first==s[i]){
                    // count++;
                    p.top().second++;
                    if(p.top().second==k){
                        p.pop();
                        
                    }
                }
                else{
                    p.push({s[i],1});
                }
            }
        }
        string ans="";
        while(!p.empty()){
            int temp=p.top().second;
            while(temp--){
                ans+=p.top().first;
            }
            p.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};