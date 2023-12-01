class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string temp1="";
        string temp2="";
        int i=0;
        while(i<word1.size()){
            temp1+=word1[i];
            i++;
        }
        i=0;
        while(i<word2.size()){
            temp2+=word2[i];
            i++;
        }
        if(temp1==temp2)return true;
        return false;
    }
};