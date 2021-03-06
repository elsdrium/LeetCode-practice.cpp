class Solution {
public:
    bool isPalindrome(int x) {
        if ( x < 0 ) return false;
        int y = 0, xx = x;
        while ( x ) {
            y = y*10 + x%10;
            x /= 10;
        }
        return xx == y;
    }
};
