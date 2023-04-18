class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int leftWord1{}, leftWord2{};
        for (size_t i = 0; i < word1.size() + word2.size(); ++i) {
            if (leftWord1 < word1.size()) {
                res += word1[leftWord1];
                leftWord1++;
            }
            if (leftWord2 < word2.size()) {
                res += word2[leftWord2];
                leftWord2++;
            }
        }
        return res;
    }
};