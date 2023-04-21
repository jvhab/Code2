class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        for (size_t i = 0; i < n;) {
            int pos = nums[i] - 1;
            if (nums[pos] != nums[i]) {
                swap(nums[pos], nums[i]);
            }
            else {
                i++;
            }
        }
        for (size_t i = 0; i < n; ++i) {
            if (nums[i] != i + 1) {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};