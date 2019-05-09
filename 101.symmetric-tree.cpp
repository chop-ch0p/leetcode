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

    bool iterative(TreeNode* lr, TreeNode* rr) {
        queue<TreeNode*> q;

        q.push(lr);
        q.push(rr);

        while(!q.empty()) {
            TreeNode* l = q.front(); q.pop();
            TreeNode* r = q.front(); q.pop();

            if (l == nullptr && r == nullptr) continue;
            else if (l == nullptr || r == nullptr) return false;
            else if (l->val != r->val) return false;

            q.push(l->left); q.push(r->right);
            q.push(l->right); q.push(r->left);
        }

        return true;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;

        return iterative(root->left, root->right);
    }
};
