class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int val=target-48;
        // int first=0;
        // int last=letters.size()-1;
        // int mid=first+last/2;
        // while(mid>=0 && mid<letters.size()){
        //     if(letters)
        // }
        int i=0;
        while(i<letters.size()){
            if(letters[i]-48>val){
                return letters[i];
            }
            i++;
        }
        return letters[0];
    }
};