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
    void go(TreeNode* b, int& r, int p){
        if(b == NULL) return;
        
        if(b->val >= p) r++, p = b->val;

        go(b->right, r, p);
        go(b->left, r, p);
    }
    int goodNodes(TreeNode* root) {
        int r = 0;
        go(root, r, root->val);
        
        return r;
    }
};