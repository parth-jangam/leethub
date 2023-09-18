class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,char>mappe;
         unordered_map<char,bool>m;
        int i=0;
        int j=0;
        while(i<s.length()){
            if(mappe.find(s[i])!=mappe.end()){
                char a=mappe[s[i]];
                if(a!=t[j]){
                    return false;
                }
            }
            else{
                if(m[t[j]]){
                    return false;
                }
                
                mappe[s[i]]=t[j];
                m[t[i]]=true;
            }
            i++;
            j++;
        }
        return true;
        
        // priority_queue<int>q1;
        // priority_queue<int>q2;
        // int i=0;
        // while(i<s.length()){
        //     mappe[s[i]]++;
        //     i++;
        // }
        // for(auto x:mappe){
        //     q1.push(x.second);
        // }
        // mappe.clear();
        // i=0;
        // while(i<t.length()){
        //     mappe[t[i]]++;
        //     i++;
        // }
        // for(auto x:mappe){
        //     q2.push(x.second);
        // }
        // if(q1.size()!=q2.size()){
        //     return false;
        // }
        // while(!q1.empty()){
        //     if(q1.top()!=q2.top()){
        //         return false;
        //     }
        //     q1.pop();
        //     q2.pop();
        // }
        // return true;

    }
};