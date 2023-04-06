class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int, int> mp1;
        int tmp{};
        for (size_t i = 0; i < nums.size(); ++i) {
            tmp = target - nums[i];
            if (mp1.find(tmp) != mp1.end()) {
                res[0] = i;
                res[1] = mp1[tmp];
                break;
            }
            mp1[nums[i]] = i;
        }
        return res;
    }
};