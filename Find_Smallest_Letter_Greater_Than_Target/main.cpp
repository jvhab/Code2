class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (letters.back() <= target)
            return letters.front();
        int l = 0;
        int r = letters.size() - 1;
        while (l < r) {
            auto mid = (l + r) / 2;
            if (target < letters[mid])
                r = mid;
            else l = mid + 1;
        }
        return letters[l];

    }
};