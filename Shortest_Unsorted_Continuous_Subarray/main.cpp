class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int end{ -1 };
        int start{};
        int l = nums[0];
        int n = nums.size();
        int r = nums[n - 1];
        for (int i = 1; i < n; ++i) {
            if (l > nums[i]) {
                end = i;
            }
            else {
                l = nums[i];
            }
        }
        for (int i = n - 2; i >= 0; --i) {
            if (r < nums[i]) {
                start = i;
            }
            else {
                r = nums[i];
            }
        }
        return end - start + 1;
    }
};