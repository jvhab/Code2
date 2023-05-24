class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp1;
        for (size_t i = 0; i < jewels.size(); ++i) {
            mp1[jewels[i]]++;
        }
        int res{};
        for (size_t i = 0; i < stones.size(); ++i) {
            if (mp1[stones[i]] > 0) {
                res++;
            }
        }
        return res;
    }
};