class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res{};
        int l1{};
        int n = nums.size();
        for (size_t i = 0; i < n; ++i) {
            if (nums[i] == 0) {
                if (k >= 1) {
                    k--;
                }
                else {
                    for (size_t j = l1; j < n; ++j) {
                        l1++;
                        if (nums[j] == 0) {
                            k++;
                            break;
                        }
                    }
                    k--;
                }
            }
            res = max(res, int(i - l1 + 1));
        }
        return res;
    }
};