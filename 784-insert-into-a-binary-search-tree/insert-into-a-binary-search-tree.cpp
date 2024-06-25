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
    void go(TreeNode* b, int x){
        if(x < b->val){
            if(b->left){
                go(b->left, x);
            }else{
                b->left = new TreeNode(x);
                return;
            }
        }else{
            if(b->right){
                go(b->right, x);
            }else{
                b->right = new TreeNode(x);
                return;
            }
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            return new TreeNode(val);
        }
        go(root, val);
        return root;
    }
};