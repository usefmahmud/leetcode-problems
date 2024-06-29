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
public:
    void go(TreeNode* b, int d, int& m){
        if(!b) return;
        ++d;
        m = max(d, m);
        go(b->left, d, m);
        go(b->right, d, m);
    }
    int maxDepth(TreeNode* root) {
        int m = 0;
        go(root, 0, m);
        return m;
    }
};