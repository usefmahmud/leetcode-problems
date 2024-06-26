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
    vector<int> v; 
public:
    void go(TreeNode* b, vector<int>& v){
        if(!b) return;
        v.push_back(b->val);

        go(b->right, v), go(b->left, v);
    }
    TreeNode* get(int l, int r){
        if(l > r) return NULL;
        int m = (l + r) / 2; 
        TreeNode* b = new TreeNode(v[m]);
        b->left = get(l, m-1);
        b->right = get(m+1, r);

        return b;
    }
    TreeNode* balanceBST(TreeNode* root) {
        go(root, v);
        sort(v.begin(), v.end());
        return get(0, v.size()-1);
    }
};