class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>p;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                string t="";
                t+=s[i];
                p.push(t);
                
            }
            else{
                if(s[i]==')'){
                    string temp="";
                    while(p.top()!="("){
                        for(int i=p.top().length()-1;i>=0;i--){
                            temp.insert(temp.begin(),p.top()[i]);
                        }
                        // temp+=p.top();
                        p.pop();
                    }
                    p.pop();
                    reverse(temp.begin(),temp.end());
                    p.push(temp);
                }
                else{
                    string t="";
                    t+=s[i];
                    p.push(t);
                }
            }
        }
        string ans="";
        while(!p.empty()){
            for(int i=p.top().length()-1;i>=0;i--){
                ans.insert(ans.begin(),p.top()[i]);
            }
            p.pop();
        }
        return ans;
    }
};