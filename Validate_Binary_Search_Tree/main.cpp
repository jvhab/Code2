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
    bool solve(TreeNode* root, int* left, int* right) {
        if (!root) {
            return true;
        }
        if (right && root->val >= *right) {
            return false;
        }
        if (left && root->val <= *left) {
            return false;
        }
        return solve(root->left, left, &root->val) && solve(root->right, &root->val, right);
    }
    bool isValidBST(TreeNode* root) {
        return solve(root, nullptr, nullptr);
    }
};