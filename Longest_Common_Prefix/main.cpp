class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res{};
        int n = strs.size() - 1;
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[n];
        for (size_t i = 0; i < a.size(); ++i) {
            if (a[i] == b[i]) {
                res += a[i];
            }
            else {
                break;
            }
        }
        return res;
    }
};