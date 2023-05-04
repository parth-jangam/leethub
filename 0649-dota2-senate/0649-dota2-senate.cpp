class Solution {
public:
    void close_var(string senate, char ch, vector<bool>&blocked,int pointer){
        while( true    ){
            if(senate[pointer]==ch && !blocked[pointer]){
                blocked[pointer]=true;
                break;
            }
            pointer=(pointer+1)%senate.length();
        }
        
    }
    string predictPartyVictory(string senate) {
        int pointer=0;
        int R_counter=0;
        int D_counter=0;
        // unordered_map<int,bool>blocked{};
        vector<bool>blocked(senate.length()+1,false);
        while(pointer<senate.length()){
            if(senate[pointer]=='R'){
                R_counter++;
            }
            else{
                D_counter++;
            }
            pointer++;
        }
        pointer=0;
        while(R_counter>0 && D_counter>0){
            if(!blocked[pointer] ){
                if(senate[pointer]=='D'){
                    close_var(senate,'R',blocked,pointer);
                    R_counter--;
                }
                else{
                    close_var(senate,'D',blocked,pointer);
                    D_counter--;
                }
            }
            pointer=(pointer+1)%senate.length();
        }
        if(R_counter==0){
            return "Dire";
        }
        return "Radiant";
    }
};