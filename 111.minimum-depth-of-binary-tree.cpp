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

    int minDepth_iter(TreeNode* root) {
        if (root == nullptr) return 0;

        queue<pair<TreeNode*, int>> q; // node, depth

        q.emplace(root, 1);

        while (!q.empty()) {
            pair<TreeNode*, int> p = q.front();
            q.pop();

            TreeNode* n = p.first;
            int depth = p.second;

            if (n->left == nullptr && n->right == nullptr) 
                return depth;
            
            if (n->left)
                q.emplace(n->left, depth + 1);
            if (n->right)
                q.emplace(n->right, depth + 1);
        }

        return -1;
    }
public:
    int minDepth(TreeNode* root) {
       return minDepth_iter(root);
    }
};
