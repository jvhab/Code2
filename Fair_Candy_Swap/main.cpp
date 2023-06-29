class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sums_a{}, sums_b{};
        for (auto i : aliceSizes) {
            sums_a += i;
        }
        for (auto i : bobSizes) {
            sums_b += i;
        }
        int diff = (sums_b - sums_a) / 2;
        unordered_set<int> st1;
        for (auto i : bobSizes) {
            st1.insert(i);
        }
        for (auto i : aliceSizes) {
            int temp = diff + i;
            if (st1.find(temp) != st1.end()) {
                return { i, temp };
            }
        }
        return {};
    }
};