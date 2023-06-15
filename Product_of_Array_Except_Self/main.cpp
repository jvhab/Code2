class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n);
        vector<int> r(n);
        vector<int> res(n);
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                l[i] = 1;
            }
            else {
                l[i] = l[i - 1] * nums[i - 1];
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (i == n - 1) {
                r[i] = 1;
            }
            else {
                r[i] = r[i + 1] * nums[i + 1];
            }
        }
        for (int i = 0; i < n; ++i) {
            res[i] = l[i] * r[i];
        }
        return res;
    }
};