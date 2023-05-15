class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (p.size() > s.size()) {
            return res;
        }
        vector<int> pStr(26);
        vector<int> sStr(26);
        int n = p.size();
        for (size_t i = 0; i < n; ++i) {
            pStr[p[i] - 'a']++;
            sStr[s[i] - 'a']++;
        }
        if (pStr == sStr) {
            res.push_back(0);
        }
        for (size_t i = p.size(); i < s.size(); ++i) {
            sStr[s[i - n] - 'a']--;
            sStr[s[i] - 'a']++;
            if (sStr == pStr) {
                res.push_back(i - n + 1);
            }
        }
        return res;
    }
};