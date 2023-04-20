class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if((s[0]==']')||(s[0]=='}')||(s[0]==')')){
                return false;
            }
            if((s[i] =='[') || (s[i] =='(' ) || (s[i] =='{')){
                p.push(s[i]);
            }
            else{
                if(!p.empty()){
                    char top=p.top();
                    if((s[i]==')' && top=='(')|| (s[i]=='}' && top=='{') ||(s[i]==']' && top=='[')){
                        p.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
    
            }
        }
        }
                                                
        if(p.empty())
            return true;
        
        else
            return false;
    }
};