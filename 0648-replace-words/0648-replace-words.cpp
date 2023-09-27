class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string,bool>mappe;
        for(int i=0;i<dictionary.size();i++){
            mappe[dictionary[i]]=true;
        }
        string ans="";
        for(int i=0;i<sentence.size();i++){
            string temp="";
            bool flag=0;
            while(i<sentence.length() && sentence[i]!=' '){
                temp+=sentence[i];
                
                if(mappe.find(temp)!=mappe.end()){
                    ans+=temp;
                    ans+=" ";
                    while(i<sentence.length() && sentence[i]!=' '){
                        i++;
                    }
                    flag=1;
                    
                }
                else{
                    i++;
                }
            }
            if(flag==0){
                ans+=temp;
                temp="";
                ans+=" ";
                
            }
        }
        ans.pop_back();
        return ans;
    }
};