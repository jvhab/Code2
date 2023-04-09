class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int tmp{};
        int sums{};
        string res{};
        while (i >= 0 || j >= 0) {
            sums = tmp;
            if (i >= 0) sums += a[i--] - '0';
            if (j >= 0) sums += b[j--] - '0';
            if (sums > 1) {
                tmp = 1;
            }
            else {
                tmp = 0;
            }
            res += to_string(sums % 2);
        }
        if (tmp) {
            res += to_string(tmp);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};