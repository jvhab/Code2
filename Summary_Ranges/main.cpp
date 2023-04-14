class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> res;
        if (n == 0) {
            return res;
        }
        int l{};
        long long now = nums[0];
        for (size_t i = 1; i < n; ++i) {
            if (nums[i] - now != 1) {
                if (i - l > 1) {
                    res.push_back(to_string(nums[l]) + "->" + to_string(now));
                    l = i;
                    now = nums[i];
                }
                else {
                    res.push_back(to_string(now));
                    l = i;
                    now = nums[i];
                }
            }
            else {
                now = nums[i];
            }
        }
        if (n - l > 1) {
            res.push_back(to_string(nums[l]) + "->" + to_string(now));
        }
        else {
            res.push_back(to_string(nums[n - 1]));
        }
        return res;
    }
};