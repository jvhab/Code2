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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) {
            return res;
        }
        queue<TreeNode*> q1;
        q1.push(root);
        int lvl{ 1 };
        while (!q1.empty()) {
            int n = q1.size();
            vector<int> cur(n);
            for (size_t i = 0; i < n; ++i) {
                TreeNode* temp = q1.front();
                if (temp->right) {
                    q1.push(temp->right);
                }
                if (temp->left) {
                    q1.push(temp->left);
                }
                q1.pop();
                if (lvl) {
                    cur[n - i - 1] = temp->val;
                }
                else {
                    cur[i] = temp->val;
                }
            }
            lvl = !lvl;
            res.push_back(cur);
        }
        return res;
    }
};