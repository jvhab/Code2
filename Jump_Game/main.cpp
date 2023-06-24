class Solution {
public:
    bool canJump(vector<int>& nums) {
        int minJump{};
        int n = nums.size();
        for (int i = n - 2; i >= 0; --i) {
            minJump++;
            if (nums[i] >= minJump) {
                minJump = 0;
            }
        }
        if (minJump == 0) {
            return true;
        }
        return false;
    }
};