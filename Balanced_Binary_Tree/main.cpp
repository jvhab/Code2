/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int max_depth(TreeNode* root, bool& res) {
        if (!root || !res) {
            return 0;
        }
        int left = max_depth(root->left, res);
        int right = max_depth(root->right, res);
        if (abs(left - right) > 1) {
            res = false;
        }
        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) {
        bool res = true;
        max_depth(root, res);
        return res;
    }
};