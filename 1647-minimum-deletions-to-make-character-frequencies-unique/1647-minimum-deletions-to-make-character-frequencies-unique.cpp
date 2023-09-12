class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mappe;
        int i=0;
        while(i<s.length()){
            mappe[s[i]]++;
            i++;
        }
        vector<int>p;
        for(auto x:mappe){
            int i=x.second;
            p.push_back(i);
        }
        sort(p.begin(),p.end());
        int count=0;
        vector<int>::iterator it;
        int summi=0;
        for(int i=0;i<p.size()-1;i++){
            if(p[i]==p[i+1]){
                
                int ch=p[i]-1;
                int count=1;
                while(true){
                    // it=s.find(ch);
                    it=find(p.begin(),p.end(),ch);
                    if(ch!=0 && it!=p.end()){
                        count++;
                        ch--;
                    }
                    else{
                        break;
                    }
                }
                p[i]=ch;
                summi+=count;
            }
        }
        return summi;
    }
};