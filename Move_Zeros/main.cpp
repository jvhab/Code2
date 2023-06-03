class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int now{};
        int n = nums.size();
        for (size_t i = 0; i < n; ++i) {
            if (nums[i] != 0) {
                nums[now] = nums[i];
                now++;
            }
        }
        for (size_t i = now; i < n; ++i) {
            nums[i] = 0;
        }
    }
};