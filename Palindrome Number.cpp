class Solution {
public:
    bool isPalindrome(int x) {
        int tmp = x;
        long res = 0;
        if (x < 0) return false;
        else {
            while (x) {
                res = res * 10 + x % 10;
                x /= 10;
            }
        }
        if (res == tmp) return true;
        else return false;
    }
};