class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l = 0;
        int res = 0;
        int n = s.size();
        for (size_t i = 0; i < n; ++i) {
            if (mp.find(s[i]) == mp.end()) {
                res = max(res, int(i - l + 1));
            }
            else {
                if (l > mp[s[i]])
                    res = max(res, int(i - l + 1));
                else
                    l = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
        }
        return res;
    }
};