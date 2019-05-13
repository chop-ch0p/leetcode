/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int height(TreeNode* root) {
        if (root == nullptr) return 0;
        return 1 + max(height(root->right), height(root->left));
    }
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        int dh = height(root->right) - height(root->left);
        if (dh < -1 || 1 < dh)
            return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};
