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
    int sum = 0;
    void go(TreeNode* branch){
        if(branch == nullptr){
            return;
        }

        go(branch->right);
        sum += branch->val;
        branch->val = sum;

        go(branch->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        go(root);

        return root;
    }
};