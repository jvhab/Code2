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
    int deepestLeavesSum(TreeNode* root) {
        if (!root) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<int> res;
        int res2{};
        while (!q.empty()) {
            res2 = 0;
            int n = q.size();
            for (size_t i = 0; i < n; ++i) {
                TreeNode* temp = q.front();
                q.pop();
                res2 += temp->val;
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
        }
        return res2;
    }
};