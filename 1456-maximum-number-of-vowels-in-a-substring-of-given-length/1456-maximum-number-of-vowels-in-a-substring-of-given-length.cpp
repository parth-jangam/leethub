class Solution {
public:
    int maxVowels(string s, int k) {
        queue<char>q;
        int i=0;
        int count=0;
        int max_count=INT_MIN;
        while(i<k){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
            q.push(s[i]);
            max_count=max(count,max_count);
            i++;
        }
        while(i<s.length()){
            if(q.front()=='a' || q.front()=='e' || q.front()=='i' || q.front()=='o' || q.front()=='u'){
                count--;
            }
            q.pop();
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
            q.push(s[i]);
            max_count=max(count,max_count);
            i++;
        }
        return max_count;
    }
};