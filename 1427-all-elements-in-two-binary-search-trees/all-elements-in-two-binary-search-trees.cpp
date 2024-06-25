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
    void getTree(TreeNode* b, vector<int>& r){
        if(!b) return;

        r.push_back(b->val);

        getTree(b->right, r);
        getTree(b->left, r);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> r;
        getTree(root1, r), getTree(root2, r);
        sort(r.begin(), r.end());

        return r;
    }
};