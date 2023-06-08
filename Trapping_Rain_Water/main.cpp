class Solution {
public:
    int trap(vector<int>& height) {
        int res{};
        int l = 0;
        int r = height.size() - 1;
        int idx_r{};
        int idx_l{};
        int cur_res_l{};
        int cur_res_r{};
        int cnt{};
        while (l < r) {
            cur_res_l = height[l];
            cur_res_r = height[r];
            if (cur_res_l < cur_res_r) {
                cnt = idx_l - cur_res_l;
                idx_l = max(idx_l, cur_res_l);
                l++;
            }
            else {
                cnt = idx_r - cur_res_r;
                idx_r = max(idx_r, cur_res_r);
                r--;
            }
            if (cnt > 0) {
                res += cnt;
            }
        }
        return res;
    }
};