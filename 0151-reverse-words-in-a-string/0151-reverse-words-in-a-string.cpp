class Solution {
public:
    string reverseWords(string s) {
        // string i=0;
        string temp="";
        string ans="";
        int i=0;
        int space=0;
        while(i<s.length()){
            while(i<s.length() && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            ans.insert(0,temp);
            temp="";
            
            while(i!=s.length() && s[i]==' '){
                if(space==0){
                    ans.insert(0," ");  
                    space++;
                }
                i++;
            }
            space=0;
            
        }
        i=0;
        while(ans[i]==' '){
            ans.erase(ans.begin());
        }
        i=ans.size()-1;
        while(ans[i]==' '){
            ans.erase(ans.begin()+i);
            i--;
        }
        return ans;
    }
};