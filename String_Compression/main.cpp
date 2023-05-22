class Solution {
public:
    int compress(vector<char>& chars) {
        int i{};
        int j{};
        while (i < chars.size()) {
            chars[j] = chars[i];
            int cnt{};
            while (i < chars.size() && chars[j] == chars[i]) {
                i++;
                cnt++;
            }
            if (cnt > 1) {
                string curr = to_string(cnt);
                for (auto it : curr) {
                    j++;
                    chars[j] = it;
                }
            }
            j++;
        }
        return j;
    }
};