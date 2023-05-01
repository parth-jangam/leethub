class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int i=0;
        bool p=1;
        while(i<s1.size()){
            if(s1[i]<s2[i]){
                p=0;
            }
           
            i++;
        }
        i=0;
        bool q=1;
        while(i<s2.size()){
            if(s1[i]>s2[i]){
                q=0;
            }
           
            i++;
        }
        if(p==0 && q==0){
            return false;
        }
        return true;
    }
};