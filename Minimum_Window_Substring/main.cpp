class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        unordered_map<char, int> mp2;
        for (size_t i = 0; i < t.size(); ++i) {
            mp[t[i]]++;
        }
        int uniqElem = mp.size();
        int countElemInS{};
        int l{};
        int res = s.size() + 1;
        int r_ptr{};
        int l_ptr{};
        for (size_t i = 0; i < s.size(); ++i) {
            mp2[s[i]]++;
            if (mp.find(s[i]) != mp.end() && mp2[s[i]] == mp[s[i]]) {
                countElemInS++;
            }
            while (countElemInS == uniqElem) {
                int cur_len = i - l + 1;
                if (cur_len < res) {
                    res = cur_len;
                    r_ptr = i;
                    l_ptr = l;
                }
                mp2[s[l]]--;
                if (mp2.find(s[l]) != mp2.end() && mp2[s[l]] < mp[s[l]]) {
                    countElemInS--;
                }
                l++;
            }
        }
        if (res == s.size() + 1) {
            return "";
        }
        return s.substr(l_ptr, res);
    }
};