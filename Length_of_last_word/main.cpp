class Solution {
public:
    int lengthOfLastWord(string s) {
        int res{};
        int cnt{};
        for (size_t i = 0; i < s.size(); ++i) {
            if (s[i] != ' ') {
                res++;
                cnt = res;
            }
            else {
                res = 0;
            }
        }
        if (res == 0)
            return cnt;
        else
            return res;
    }
};