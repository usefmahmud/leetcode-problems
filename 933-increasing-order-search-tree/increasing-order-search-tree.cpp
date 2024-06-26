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
    vector<int> r;
public:
    void go(TreeNode* b){
        if(!b) return;

        go(b->left);
        r.push_back(b->val);
        go(b->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(!root) return NULL;

        go(root);
        TreeNode* tree = new TreeNode(r[0]);
        TreeNode* curr = tree;
        for(int i = 1; i < r.size(); i++){
            curr->right = new TreeNode(r[i]);
            curr = curr->right;
        }

        return tree;
    }
};