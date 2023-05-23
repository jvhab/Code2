class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int a{};
        int b{};
        int res{};
        int n = nums.size();
        for (size_t i = 0; i < n; ++i) {
            if (nums[i] == 1) {
                a++;
            }
            else {
                b = a;
                a = 0;
            }
            res = max(res, b + a);
        }
        if (res == n) {
            return res - 1;
        }
        return res;
    }
};