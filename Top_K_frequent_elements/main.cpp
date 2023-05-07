class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp1;
        vector<int> res;
        int n = nums.size();
        vector<stack<int>> freq(n + 1);
        for (size_t i = 0; i < n; ++i) {
            mp1[nums[i]]++;
        }
        for (auto i : mp1) {
            freq[i.second].push(i.first);
        }
        for (int i = freq.size() - 1; i >= 0; --i) {
            if (!freq[i].empty() && k != 0) {
                while (!freq[i].empty() && k != 0) {
                    k--;
                    res.push_back(freq[i].top());
                    freq[i].pop();
                }
            }
            if (k == 0) {
                break;
            }
        }
        return res;
    }
};