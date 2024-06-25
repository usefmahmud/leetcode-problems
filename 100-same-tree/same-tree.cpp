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
    bool go(TreeNode* a, TreeNode* b){
        if(!a && !b){
            return true;
        }
        if(!a || !b || a->val != b->val){
            return false;
        }
        return go(a->right, b->right) && go(a->left, b->left);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return go(p, q);
    }
};