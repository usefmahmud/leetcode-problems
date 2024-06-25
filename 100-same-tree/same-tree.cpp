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
    void go(TreeNode* a, TreeNode* b, bool& state){
        if((!a && b) || (a && !b)){
            state = false;
            return;
        }
        if(!a && !b) return;
        if(a->val != b->val){
            state = false;
            return;
        }
        go(a->right, b->right, state);
        go(a->left, b->left, state);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool state = true;
        go(p, q, state);
        return state;
    }
};