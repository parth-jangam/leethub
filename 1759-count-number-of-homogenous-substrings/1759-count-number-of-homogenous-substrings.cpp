class Solution {
public:
    int countHomogenous(string s) {
        int i=0;
        long long ans=0;
        while(i<s.length()){
            string temp="";
            while(i<s.length() && (temp=="" || s[i-1]==s[i])){
                temp+=s[i];
                i++;
            }
            long long n=temp.length();
            ans+=(n*(n+1)/2)%1000000007;
            // cout<<ans<<endl;
            
        }
        return ans%1000000007;
    }
};