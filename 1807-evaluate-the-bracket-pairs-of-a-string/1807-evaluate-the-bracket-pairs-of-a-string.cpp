class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mappe;
        int i=0;
        while(i<knowledge.size()){
            mappe[knowledge[i][0]]=knowledge[i][1];
            i++;
        }
        i=0;
        string ans="";
        while(i<s.length()){
            if(s[i]=='('){
                string temp="";
                i++;
                while(s[i]!=')'){
                    temp+=s[i];
                    i++;
                }
                i++;
                if(mappe[temp]!=""){
                    ans+=mappe[temp];
                }
                else{
                    ans+='?';
                }
                
            }
            else{
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};