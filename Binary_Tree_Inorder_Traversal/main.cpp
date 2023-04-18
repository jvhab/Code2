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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (!root) {
            return res;
        }
        stack<TreeNode*> st1;
        st1.push(root);
        while (!st1.empty()) {
            TreeNode* now = st1.top();
            if (now->left) {
                st1.push(now->left);
                now->left = nullptr;
            }
            else {
                res.push_back(now->val);
                st1.pop();
                if (now->right) {
                    st1.push(now->right);
                }
            }
        }
        return res;
    }
};