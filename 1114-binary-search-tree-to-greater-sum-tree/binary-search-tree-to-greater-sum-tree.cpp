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
    int total = 0;
public:
    void go(TreeNode* branch){
        if(branch == nullptr) return;

        // go greatest (right) then backtrack and go lowest (left)
        go(branch -> right);
        total += branch -> val, branch -> val = total;

        go(branch -> left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        go(root);

        return root;
    }
};