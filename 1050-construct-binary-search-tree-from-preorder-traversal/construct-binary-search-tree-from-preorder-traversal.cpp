/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int i = 0;
public:
    TreeNode* bstFromPreorder(vector<int>& p, int mx = INT_MAX) {
        if(i == p.size() || p[i] > mx) return NULL;
        auto root = new TreeNode(p[i++]);
        root->left = bstFromPreorder(p, root->val);
        root->right = bstFromPreorder(p, mx);
        
        return root;
    }
};