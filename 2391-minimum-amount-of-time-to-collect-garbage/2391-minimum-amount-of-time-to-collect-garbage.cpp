class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int i=garbage.size()-1;
        bool f1=false,f2=false,f3=false;
        
        int last_m=0,last_p=0,last_g=0;
        while(i>=0){
            for(int j=0;j<garbage[i].length();j++){
                if(garbage[i][j]=='M' && f1==false){
                    last_m=i;
                    f1=true;
                }
                else{
                    if(garbage[i][j]=='G' && f2==false){
                        last_g=i;
                        f2=true;
                    }
                    else{
                        if(garbage[i][j]=='P' && f3==false){
                            last_p=i;
                            f3=true;
                        }
                    }
                }
            }
            i--;
        }
        int cur_in=0;
        i=1;
        int ans=0;
        ans+=garbage[0].length();
        // int ans=0;
        // cout<<last_m<<" "<<last_p<<" "<<last_g<<endl;
        int initial=3;
        while(i<garbage.size()){
            ans+=garbage[i].length();
            // ans+=()
            if(last_m<i){
                initial--;
                last_m=INT_MAX;
            }
            if(last_g<i){
                initial--;
                last_g=INT_MAX;
            }
            if(last_p<i){
                initial--;
                last_p=INT_MAX;
            }
            // cout<<initial<<endl;
            ans+=(initial*travel[i-1]);
            i++;
            
        }
        return ans;
        
    }
};