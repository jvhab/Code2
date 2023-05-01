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
    int minDepth(TreeNode* root) {
        queue<TreeNode*> q1;
        int cnt{};
        if (!root) {
            return 0;
        }
        q1.push(root);
        while (!q1.empty()) {
            int n = q1.size();
            cnt++;
            for (size_t i = 0; i < n; ++i) {
                TreeNode* temp = q1.front();
                q1.pop();
                if (temp->left) {
                    q1.push(temp->left);
                }
                if (temp->right) {
                    q1.push(temp->right);
                }
                if (!temp->right && !temp->left) {
                    return cnt;
                }
            }
        }
        return cnt;
    }
};