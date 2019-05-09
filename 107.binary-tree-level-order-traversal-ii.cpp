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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<TreeNode*> cur;
        vector<TreeNode*> next;
        vector<int> arr;
        vector< vector<int> > result;

        if (root == nullptr) return result;

        next.push_back(root);

        while ( next.size() > 0 ) {
            cur.clear();
            cur.swap(next);
            arr.clear();
            int len = cur.size();

            for (int i = 0; i < len; i++) {
                arr.push_back(cur[i]->val);
                if (cur[i]->left)
                    next.push_back(cur[i]->left);
                if (cur[i]->right)
                    next.push_back(cur[i]->right);
            }

            result.insert(result.begin(), arr);
        }

        return result;
    }
};
