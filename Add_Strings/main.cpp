class Solution {
public:
    string addStrings(string num1, string num2) {
        int l1 = num1.size() - 1;
        int l2 = num2.size() - 1;
        string res;
        int cnt{};
        while (l1 >= 0 || l2 >= 0 || cnt) {
            int sums = cnt;
            if (l1 >= 0) {
                sums += num1[l1] - '0';
                l1--;
            }
            if (l2 >= 0) {
                sums += num2[l2] - '0';
                l2--;
            }
            res += to_string(sums % 10);
            cnt = sums / 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};