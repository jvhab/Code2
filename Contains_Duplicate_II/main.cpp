class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp1;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (mp1.find(nums[i]) != mp1.end()) {
                if (abs(mp1[nums[i]] - i) <= k) {
                    return true;
                }
            }
            mp1[nums[i]] = i;
        }
        return false;
    }
};