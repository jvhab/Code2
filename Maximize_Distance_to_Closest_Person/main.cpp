class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int res{};
        int cur{ -1 };
        int n = seats.size();
        for (size_t i = 0; i < n; ++i) {
            if (seats[i] == 1) {
                cur = i;
            }
            if (cur == -1) {
                res++;
            }
            else {
                res = max(res, int(i - cur + 1) / 2);
            }
        }
        return max(res, n - cur - 1);
    }
};