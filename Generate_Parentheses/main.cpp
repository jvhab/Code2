class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(res, "", n, n);
        return res;
    }
    void solve(vector<string>& v1, string tmp, int left, int right) {
        if (left == 0 && right == 0) {
            v1.push_back(tmp);
        }
        if (left > 0) {
            solve(v1, tmp + "(", left - 1, right);
        }
        if (right > 0 && right > left) {
            solve(v1, tmp + ")", left, right - 1);
        }
    }
};