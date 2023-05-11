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
    int max_depth(TreeNode* root, int& d) {
        if (!root) {
            return 0;
        }
        int l = max_depth(root->left, d);
        int r = max_depth(root->right, d);
        d = max(d, l + r);
        return max(r, l) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int d{};
        max_depth(root, d);
        return d;
    }
};