class Solution {
public:
    int count=0;
    void backtrack(string s,unordered_map<string,bool>&mappe,int i,string temp,int ans){
        if(i>=s.length()){
            // if(!mappe[temp]){
            if(count<ans){
                count=ans;
            }
            // mappe.clear();
                // count=max(count,mappe.size());
            // }
            return;
        }
      
            temp+=s[i];
            if(!mappe[temp]){
                mappe[temp]=true;
                ans++;
                // string temp1=temp;
                // temp="";
                backtrack(s,mappe,i+1,"",ans);
                // temp=temp1;
                ans--;
                mappe[temp]=false;
            }
        backtrack(s,mappe,i+1,temp,ans);
            // temp.pop_back();

    }
    int maxUniqueSplit(string s) {
        unordered_map<string,bool>mappe;
        string temp="";
        int ans=0;
        backtrack(s,mappe,0,temp,ans);
        return count;
    }
};