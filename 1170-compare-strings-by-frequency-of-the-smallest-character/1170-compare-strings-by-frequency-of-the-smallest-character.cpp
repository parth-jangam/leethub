class Solution {
public:
    // int value(string temp){
    //     int ans=0;
    //     for(int i=0;i<temp.size();i++){
    //         ans+=int(temp[i]);
    //     }
    //     return ans;
    // }
    int frequ(string temp){
        char ch=temp[0];
        int count=0;
        int i=0;
        while(i<temp.length() && ch==temp[i]){
            count++;
            i++;
        }
        return count;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>freq(words.size(),0);
        for(int i=0;i<words.size();i++){
            sort(words[i].begin(),words[i].end());
            freq[i]=frequ(words[i]);
        }    
        sort(freq.begin(),freq.end());
        vector<int>ans(queries.size(),0);
        vector<int>::iterator it;
        for(int i=0;i<queries.size();i++){
            sort(queries[i].begin(),queries[i].end());
            int f=frequ(queries[i]);
            it=upper_bound(freq.begin(),freq.end(),f);
            int pos=freq.end()-it;
            ans[i]=pos;
            
        }
        return ans;
    }
};