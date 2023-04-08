class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int l = 0;
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[l] != nums[i]) {
                l++;
                nums[l] = nums[i];
            }
        }
        return l + 1;
    }
};