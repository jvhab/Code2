class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x % 10 == 0 && x != 0) {
            return false;
        }
        int cnt{ 0 };
        while (x > cnt) {
            cnt = cnt * 10 + x % 10;
            x /= 10;
        }
        return x == cnt || x == cnt / 10;
    }
};