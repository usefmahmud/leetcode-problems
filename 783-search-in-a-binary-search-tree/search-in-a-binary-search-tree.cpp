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
    TreeNode* searchBST(TreeNode* b, int val) {
        if(!b) return NULL;
        
        if(b->val == val){
            return b;
        }else if(val > b->val){
            return searchBST(b->right, val);
        }else{
            return searchBST(b->left, val);
        }
        return NULL;
    }
};