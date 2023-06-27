class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp1;
        for (size_t i = 0; i < magazine.size(); ++i) {
            mp1[magazine[i]]++;
        }
        for (size_t i = 0; i < ransomNote.size(); ++i) {
            if (mp1[ransomNote[i]] > 0) {
                mp1[ransomNote[i]]--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};