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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if (!root) {
            return res;
        }
        queue<TreeNode*> q1;
        q1.push(root);
        while (!q1.empty()) {
            int n = q1.size();
            double sums{};
            for (size_t i = 0; i < n; ++i) {
                TreeNode* temp = q1.front();
                q1.pop();
                if (temp->left) {
                    q1.push(temp->left);
                }
                if (temp->right) {
                    q1.push(temp->right);
                }
                sums += temp->val;
            }
            res.push_back(sums / n);
        }
        return res;
    }
};