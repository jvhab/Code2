class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        bool flag{ false };
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i] += 1;
                flag = true;
                break;
            }
            else {
                digits[i] = 0;
            }
        }
        if (flag)
            return digits;
        else {
            vector<int> ndigits;
            ndigits.push_back(1);
            for (size_t i = 0; i < n; ++i)
                ndigits.push_back(0);
            return ndigits;
        }
    }
};