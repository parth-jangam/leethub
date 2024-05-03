class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>ans(s.length());
        for(int i=0;i<s.length();i++){
            int count=0;
            int x=startPos[0];
            int y=startPos[1];
            for(int j=i;j<s.length();j++){
                
                
                if(s[j]=='R'){
                    y++ ;   
                }
                else{
                    if(s[j]=='L'){
                        y--;
                    }
                    else{
                        if(s[j]=='U'){
                            x--;
                        }
                        else{
                            x++;
                        }
                    }
                }
                
                if(x>=0 && y>=0 && x<n && y<n){
                    count++;
                }
                else{
                    break;
                }
            }
            ans[i]=count;
            
        }
        
        return ans;
    }
};