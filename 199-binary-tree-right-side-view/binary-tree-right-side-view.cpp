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
    void go(TreeNode* b, int l, vector<int>& v){
        if(b == NULL){
            return;
        }
        if(v.size() == l) v.push_back(b->val);

        go(b->right, l+1, v);
        go(b->left, l+1, v);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> r;
        go(root, 0, r);
        return r;
    }
};