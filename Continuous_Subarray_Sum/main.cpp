class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if (nums.size() < 2) {
            return false;
        }
        unordered_map<int, int> mp1;
        mp1[0] = -1;
        int n = nums.size();
        int sums{};
        for (size_t i = 0; i < n; ++i) {
            sums += nums[i];
            sums %= k;
            if (mp1.find(sums) != mp1.end()) {
                if (i - mp1[sums] > 1) {
                    return true;
                }
            }
            else {
                mp1[sums] = i;
            }
        }
        return false;
    }
};