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
    void go(TreeNode* branch, int& t){
        if(branch == NULL) return;

        // go greatest (right) then backtrack and go lowest (left)
        go(branch -> right, t);
        t += branch -> val, branch -> val = t;

        go(branch -> left, t);
    }
    TreeNode* convertBST(TreeNode* root) {
        int total = 0;
        go(root, total);

        return root;
    }
};