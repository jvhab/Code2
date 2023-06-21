class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for (size_t i = 0; i < n; ++i) {
            if (nums[abs(nums[i]) - 1] < 0) {
                res.push_back(abs(nums[i]));
            }
            nums[abs(nums[i]) - 1] *= -1;
        }
        return res;
    }
};