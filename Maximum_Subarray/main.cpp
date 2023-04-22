class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res{ -1000000 };
        int sums{};
        for (size_t i = 0; i < nums.size(); ++i) {
            sums += nums[i];
            sums = max(sums, nums[i]);
            res = max(res, sums);
        }
        return res;
    }
};