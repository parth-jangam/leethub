class Solution {
public:
    int myAtoi(string s) {
        stringstream geek;
        geek << s;
        int x = 0;
        geek >> x;
        return x;
    }
};