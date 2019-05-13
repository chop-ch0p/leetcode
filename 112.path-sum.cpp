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
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr) return false;
        
        stack<pair<TreeNode*, int>> s; // node, sum
        s.emplace(root, 0);

        while(!s.empty()) {
            pair<TreeNode*, int> p = s.top();
            s.pop();

            TreeNode* c = p.first;
            int curSum = p.second + c->val;

            if (c->left == nullptr && c->right == nullptr && curSum == sum) return true;
            
            if (c->left) s.emplace(c->left, curSum);
            if (c->right) s.emplace(c->right, curSum);
        }

        return false;
    }
};
