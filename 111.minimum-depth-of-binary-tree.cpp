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
    int minDepth_recursive(TreeNode* root) {
        if (root == nullptr) return 0;

        int hl = minDepth_recursive(root->left);
        int hr = minDepth_recursive(root->right);

        if (hl == 0 || hr == 0)
            return max(hl, hr) + 1;
        else
            return min(hl, hr) + 1;
    }
public:
    int minDepth(TreeNode* root) {
       return minDepth_recursive(root);
    }
};
