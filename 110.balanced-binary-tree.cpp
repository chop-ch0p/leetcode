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

        int heightLeft = height(root->left);
        int heightRight = height(root->right);

        if (heightLeft == -1 || heightRight == -1 || abs(heightLeft - heightRight) > 1) return -1;

        return 1 + max(heightLeft, heightRight);
    }
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};
