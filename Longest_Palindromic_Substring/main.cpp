class Solution {
public:
    string solve(string s, int l, int r) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        string temp;
        for (size_t i = l + 1; i < r; ++i) {
            temp += s[i];
        }
        return temp;
    }
    string longestPalindrome(string s) {
        string res{};
        for (size_t i = 0; i < s.size(); ++i) {
            string str1 = solve(s, i, i);
            string str2 = solve(s, i, i + 1);
            if (str1.size() > res.size()) {
                res = str1;
            }
            if (str2.size() > res.size()) {
                res = str2;
            }
        }
        return res;
    }
};