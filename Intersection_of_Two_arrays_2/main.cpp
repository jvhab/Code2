class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        vector<int> res;
        for (size_t i = 0; i < nums1.size(); ++i) {
            mp1[nums1[i]]++;
        }
        for (size_t i = 0; i < nums2.size(); ++i) {
            if (mp1[nums2[i]] > 0) {
                res.push_back(nums2[i]);
                mp1[nums2[i]]--;
            }
        }
        return res;
    }
};