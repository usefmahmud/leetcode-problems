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
    void go(TreeNode* b, string& r){
        if(!b) return;

        if(!b->right && !b->left) r += to_string(b->val);
        
        go(b->right, r);
        go(b->left, r);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string a="", b="";
        go(root1, a), go(root2, b);

        return a == b;
    }
};