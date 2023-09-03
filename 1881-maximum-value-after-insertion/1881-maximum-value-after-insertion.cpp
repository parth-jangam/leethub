class Solution {
public:
    string maxValue(string n, int x) {
        if(n[0]=='-'){
            int i=1;
            string ans="";
            ans+=n[i];
            while(i<n.length() && stoi(ans)<=x){
                ans="";
                i++;
                ans+=n[i];
            }
            string d=to_string(x);
            char x=d[0];
            n.insert(n.begin()+i,x);
        }
        else{
            int i=0;
            string ans="";
            ans+=n[i];
            while(i<n.length() && stoi(ans)>=x){
                ans="";
                i++;
                ans+=n[i];
            }
            string d=to_string(x);
            char x=d[0];
            n.insert(n.begin()+i,x);
        }
        return n;
    }
    
};