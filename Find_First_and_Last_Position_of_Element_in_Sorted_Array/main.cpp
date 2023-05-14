class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = bin_search(nums, target);
        int second = bin_search(nums, target + 1) - 1;
        vector<int> res(2, -1);
        if (first < nums.size() && nums[first] == target) {
            res[0] = first;
            res[1] = second;
        }
        else {
            return res;
        }
        return res;
    }

    int bin_search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return l;
    }
};