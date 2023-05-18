class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp1;
        mp1[0] = 1;
        int res{};
        int sums{};
        for (size_t i = 0; i < nums.size(); ++i) {
            sums += nums[i];
            int now = sums - k;
            if (mp1.find(now) != mp1.end()) {
                res += mp1[now];
            }
            mp1[sums]++;
        }
        return res;
    }
};