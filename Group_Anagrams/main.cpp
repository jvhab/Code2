class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        for (size_t i = 0; i < n; ++i) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }
        for (auto i : mp) {
            res.push_back(i.second);
        }
        return res;
    }
};