class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>s(wordList.begin(),wordList.end());
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        
        while(!q.empty()){
            string temp=q.front().first;
            int stage=q.front().second;
            q.pop();
            if(temp==endWord){
                return stage;
            }
            for(int i=0;i<temp.length();i++){
                char t=temp[i];
                for(char j='a';j<='z';j++){
                    temp[i]=j;
                    if(s.find(temp)!=s.end()){
                        q.push({temp,stage+1});
                        s.erase(temp);
                    }
                    
                }
                temp[i]=t;
            }
        }
        return 0;
    }
};