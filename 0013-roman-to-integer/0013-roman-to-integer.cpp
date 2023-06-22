class Solution {
public:
    int romanToInt(string s) {
        // return 0;
        
        unordered_map<char,int>mappe;
        mappe['I']=1;
        mappe['V']=5;
        mappe['X']=10;
        mappe['L']=50;
        mappe['C']=100;
        mappe['D']=500;
        mappe['M']=1000;
        int i=s.length()-1;
        int num=0;
        char prev=s[i];
        num+=mappe[prev];
        i--;
        while(i>=0){
            if(mappe[prev]>mappe[s[i]]){
                num-=mappe[s[i]];
            }
            else{
                prev=s[i];
                num+=mappe[s[i]];
            }
            i--;
        }
        return num;
        
        
    }
};