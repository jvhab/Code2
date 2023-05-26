class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt{};
        for (size_t i = 0; i < t.size(); ++i) {
            if (s[cnt] == t[i]) {
                cnt++;
            }
        }
        if (cnt == s.size()) {
            return true;
        }
        else {
            return false;
        }
    }
};