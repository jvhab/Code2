class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote{};
        int res{};
        for (size_t i = 0; i < nums.size(); ++i) {
            if (vote == 0) {
                res = nums[i];
            }
            if (res == nums[i]) {
                vote++;
            }
            else {
                vote--;
            }
        }
        return res;
    }
};