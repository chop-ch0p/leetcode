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
    TreeNode* makeBBST(vector<int>& nums, int l, int r) {
        int m = (l + r) >> 1;
        if (l > r) return nullptr;
        TreeNode* root = new TreeNode(nums[m]);

        root->left = makeBBST(nums, l, m-1);
        root->right = makeBBST(nums, m+1, r);

        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeBBST(nums, 0, nums.size() - 1);
    }
};
