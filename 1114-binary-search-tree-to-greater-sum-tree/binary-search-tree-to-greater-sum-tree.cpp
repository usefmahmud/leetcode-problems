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
private:
public:
    void go(TreeNode* branch, int& total){
        if(branch == NULL){
            return;
        }

        go(branch->right, total);
        total += branch->val;
        branch->val = total;

        go(branch->left, total);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int total = 0;
        go(root, total);

        return root;
    }
};