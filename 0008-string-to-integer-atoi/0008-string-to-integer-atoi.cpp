class Solution {
public:
    int myAtoi(string s) {
            stringstream geek;
 
    // inserting string s in geek stream
        geek << s;

        int x = 0;
        geek >> x;
        return x;
    }
};