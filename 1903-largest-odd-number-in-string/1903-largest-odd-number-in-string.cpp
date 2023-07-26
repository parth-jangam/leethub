class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.length()-1;
        while(i>=0){
            if(num[i]=='8' ||num[i]=='6' ||num[i]=='4' ||num[i]=='2' ||num[i]=='0'){
                num.erase(num.begin()+(num.length()-1));
            }
            else{
                break;
            }
            i--;
        }
        return num;
    }
};