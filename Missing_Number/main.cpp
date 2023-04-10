class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sums{};
        for (size_t i = 0; i < n; ++i) {
            sums += nums[i];
        }
        return (n * (n + 1)) / 2 - sums;
    }
};