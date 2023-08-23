class Solution {
public:
    int minimumLength(string s) {
        if(s.length()==1){
            return 1;
        }
        int i=0;
        int j=s.length()-1;
        while(i<j){
            string prefix="";
            prefix+=s[i];
            string suffix="";
            suffix+=s[j];
            char a=s[i];
            char b=s[j];
            if(a!=b){
                return (j-i)+1;
            }
            i++;
            j--;
            
            while(i<j && (s[i]==a || s[j]==b)){
                if(s[i]==a){
                     prefix+=s[i];
                    i++;
                }
                else{
                    if(s[j]==b){
                        suffix+=s[j];
                        j--;
                    }
                }
              
            }
            if(i==j && a!=s[i]){
                return 1;
            }
            // if(suffix!=prefix){
            //     s.length()-(prefix.length()+suffix.length());
            // }
            
        }
        // if(i==j){
        //     return 1;
        // }
        return 0;
    }
};