class Solution {
public:
    /**
     * @param s: a string
     * @return: the length of the longest substring T that contains at most 2 distinct characters
     */
    int lengthOfLongestSubstringTwoDistinct(string& s) {
        unordered_map<char, int> mp1;
        int n = s.size();
        int curr{};
        int res{};
        for (size_t i = 0; i < n; ++i) {
            mp1[s[i]]++;
            while (mp1.size() > 2) {
                mp1[s[curr]]--;
                if (mp1[s[curr]] == 0) {
                    mp1.erase(s[curr]);
                }
                curr++;
            }
            res = max(res, i - curr + 1);
        }
        return res;
    }
};