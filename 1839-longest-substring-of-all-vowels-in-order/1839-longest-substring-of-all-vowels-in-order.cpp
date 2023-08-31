class Solution {
public:
    int longestBeautifulSubstring(string word) {
        vector<int>q;
        
        vector<char>chara={'a','e','i','o','u'};
        char cur='a';
        int j=0;
        int maxi=0;
        int i=0;
        while(i<word.length()){
            // cout<<cur<<endl;
            if(word[i]!=cur){
                // cout<<i<<"  1"<<endl;
                // i++;
                q.clear();
                j=0;
                if(word[i]=='a'){

                    cur='a';    
                    
                }
                else{
                    cur='a'; 
                    // cout<<i<<"  1"<<endl;
                    i++;
                }
                


            }
            else{
                while(word[i]==cur){
                    q.push_back(word[i]);
                    if(word[i]=='u'){
                        // cout<<i<<endl;
                        if(maxi<q.size()){
                            maxi=q.size();
                        }
                        // maxi=max(maxi,q.size());
                    }
                    i++;
                }
                j++;
                if(j>=5){
                    j=0;
                    q.clear();
                    cur='a';
                }
                else {
                    cur=chara[j];
                }
            }

        }
        return maxi;
    }
};