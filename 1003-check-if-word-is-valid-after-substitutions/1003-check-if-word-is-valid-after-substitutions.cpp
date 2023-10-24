class Solution {
public:
    bool isValid(string s) {
        while(s.length()!=0){
            size_t found=s.find("abc");
            if(found!=string::npos){
                // cout<<found<<endl;
                s.erase(s.begin()+found,s.begin()+found+3);
                // cout<<s<<endl;
                
            }
            else{
                return false;
            }
        }
        return true;
    }
};