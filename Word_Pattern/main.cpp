class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, int> mp1;
        unordered_map<char, int> mp2;
        vector<string> str;
        string temp;
        for (size_t i = 0; i < s.size(); ++i) {
            if (s[i] != ' ') {
                temp += s[i];
            }
            else {
                str.push_back(temp);
                temp = "";
            }
        }
        str.push_back(temp);
        if (str.size() != pattern.size()) {
            return false;
        }
        for (size_t i = 0; i < pattern.size(); ++i) {
            if (mp1[str[i]] != mp2[pattern[i]]) {
                return false;
            }
            mp1[str[i]] = i + 1;
            mp2[pattern[i]] = i + 1;
        }
        return true;
    }
};