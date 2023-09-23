class Solution {
public:
    bool compare(string &s1,string &s2)
    {
        return s1.size() < s2.size();
    }
    bool is_possible(int cur,int prev,vector<string>& word){
        if(prev==-1){
            return true;
        }
        if(word[prev].length()+1!=word[cur].length()){
            return false;
        }
        int i=0;
        int j=0;
        while(i<word[prev].length() && j<word[cur].length()){
            while(j<word[cur].length() && word[prev][i]!=word[cur][j]){
                j++;
            }
            if(j==word[cur].length()){
                break;
            }
            i++;j++;
        }
        if(i==word[prev].length()){
            return true;
        }
        return false;
        
    }
    int maxi(int curr,int prev,vector<string>& words,vector<vector<int>>&dp){
        if(curr>=words.size()){
            return 0;
        }
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }
        int take=0;
        if(is_possible(curr,prev,words)){
            take=1+maxi(curr+1,curr,words,dp);
        }
        int not_take=maxi(curr+1,prev,words,dp);
        return dp[curr][prev+1]= max(take,not_take);
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });
        // cout<<words[0]<<endl;
        vector<vector<int>>dp(n+1,vector<int>(n+2,-1));
         return maxi(0,-1,words,dp);
    }
};