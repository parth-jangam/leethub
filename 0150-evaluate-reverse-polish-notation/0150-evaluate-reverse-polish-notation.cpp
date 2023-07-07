class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<long long>s;
        int i=0;
        long long ans;
        while(i<token.size()){
            if(token[i]=="+" || token[i]=="-" || token[i]=="*" || token[i]=="/"){
                long long a=s.top();
                s.pop();
                long long b=s.top();
                s.pop();
                if(token[i]=="+"){
                    ans=a+b;
                }
                if(token[i]=="-"){
                    ans=b-a;
                }
                if(token[i]=="*"){
                    ans=a*b;
                }
                if(token[i]=="/"){
                    ans=b/a;
                }
                s.push(ans);
                
            }
            else{
                s.push(stoi(token[i]));
            }
            i++;
        }
        
        return s.top();
    }
};