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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;
        q1.push(root->left);
        q2.push(root->right);
        while (!q1.empty() || !q2.empty()) {
            TreeNode* temp = q1.front();
            TreeNode* temp2 = q2.front();
            q1.pop();
            q2.pop();
            if (!temp && !temp2) {
                continue;
            }
            else if (!temp || !temp2) {
                return false;
            }
            else if (temp->val != temp2->val) {
                return false;
            }
            q1.push(temp->left);
            q1.push(temp->right);
            q2.push(temp2->right);
            q2.push(temp2->left);
        }
        return true;
    }
};