class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        char a,b,c,d;
        int exmpt=0;
        int i=0;
        bool flag=0;
        unordered_map<char,int>mappe;
        // int j=0;
        
        while(i<s.length()){
            if(mappe[s[i]]==1){
                flag=1;
            }
            if(s[i]!=goal[i] && exmpt>=2){
                return false;
                
            }
            else{
                if(s[i]!=goal[i] && exmpt<2){
                    if(exmpt==0){
                        a=s[i];
                        b=goal[i];
                    }
                    else{
                        c=s[i];
                        d=goal[i];
                    }
                    exmpt++;
                }
            }
            mappe[s[i]]++;
            i++;
        }
        if(exmpt==1){
            return false;
        }
        else{
            if(exmpt==0  && flag==0){
                return false;
            }
            else{
                if(a!=d || b!=c){
                    return false;
                }
            }
        }
        return true;
    }
};