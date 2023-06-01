class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> all_coins(amount + 1, amount + 1);
        all_coins[0] = 0;
        for (int i = 1; i <= amount; ++i) {
            for (auto coin : coins) {
                if (i - coin >= 0) {
                    all_coins[i] = min(all_coins[i], 1 + all_coins[i - coin]);
                }
            }
        }
        if (all_coins[amount] != amount + 1) {
            return all_coins[amount];
        }
        return -1;
    }
};