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
    bool recursive(TreeNode* p, TreeNode* q) {
         if (p == nullptr && q == nullptr) return true;
        else if (p == nullptr || q == nullptr) return false;
        else if (p->val != q->val) return false;

        return recursive(p->left, q->right) && recursive(p->right, q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;

        return recursive(root->left, root->right);
    }
};
