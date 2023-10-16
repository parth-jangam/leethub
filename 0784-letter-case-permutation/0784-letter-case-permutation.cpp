class Solution {
public:
    void make_p(string s,int i,set<string>&p){
        if(i>=s.length()){
            p.insert(s);
            return ;
        }
        if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' ||s[i]=='8' || s[i]=='9'){
            make_p(s,i+1,p);
        }
        else{
            char temp=tolower(s[i]);
            s[i]=temp;
            make_p(s,i+1,p);
            temp=toupper(s[i]);
            s[i]=temp;
            make_p(s,i+1,p);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        set<string>p;
        make_p(s,0,p);
        for(auto x:p){
            ans.push_back(x);
        }
        return ans;
    }
};