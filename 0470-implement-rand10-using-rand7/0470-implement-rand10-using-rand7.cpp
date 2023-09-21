// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        vector<int>num={1,2,3,4,5,6,7,8,9,10};
        return num[rand()%10];
        // return rand()%10;
    }
};