class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        string temp="";
        int i=0;
        int type1=0,type2=0;
        while(i<s.length()){
            temp+=s[i];
            if(s[i]=='(')type1++;
            if(s[i]==')')type2++;
            if(type1==type2){
                temp.pop_back();
                temp.erase(temp.begin());
                ans+=temp;
                temp="";
            }
            i++;
        }
        return ans;
    }
};