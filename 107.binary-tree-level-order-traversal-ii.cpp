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
            for(auto i : cur) {
                arr.push_back(i->val);
                if (i->left)
                    next.push_back(i->left);
                if (i->right)
                    next.push_back(i->right);
            }

            result.insert(result.begin(), arr);
        }

        return result;
    }
};
