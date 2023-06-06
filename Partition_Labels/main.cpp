class Solution {
public:
    vector<int> partitionLabels(string s) {
        int now{};
        int n = s.size();
        int cnt{};
        vector<int> res;
        unordered_map<char, int> mp;
        for (size_t i = 0; i < n; ++i) {
            mp[s[i]] = i;
        }
        for (size_t i = 0; i < n; ++i) {
            if (mp[s[i]] > now) {
                now = mp[s[i]];
            }
            if (now == i) {
                res.push_back(i - cnt + 1);
                cnt = i + 1;
            }
        }
        return res;
    }
};