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
    void go(TreeNode* b, vector<int>& v){
        if(!b) return;
        
        go(b->left, v);
        v.push_back(b->val);
        go(b->right, v);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        go(root, v);
        for(int i = 1; i < v.size(); i++){
            if(v[i] <= v[i-1]){
                return false;
            }
        }
        return true;
    }
};