class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=0;
        while(i<s.length()){
            if(s[i]=='#'){
                s.erase(s.begin()+i);
                if(i-1>=0){
                    s.erase(s.begin()+(i-1));
                    i=i-1;
                }
                
            }
            else{
                i++;
            }
        }
        i=0;
        while(i<t.length()){
            if(t[i]=='#'){
                t.erase(t.begin()+i);
                if(i-1>=0){
                    t.erase(t.begin()+(i-1));
                    i=i-1;
                }
                
            }
            else{
                i++;
            }
        }
        cout<<s<<" "<<t<<endl;
        if(s==t){
            return true;
        }
        return false;
    }
};