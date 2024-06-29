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
    void go(TreeNode* b, int t, int sum, vector<int> v, vector<vector<int>>& r){
        if(!b) return;
        
        v.push_back(b->val);
        sum += b->val;
        if(!b->right && !b->left){
            if(sum == t){
                r.push_back(v);
                return;
            }
        }

        go(b->left, t, sum, v, r);
        go(b->right, t, sum, v, r);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> r;
        vector<int> v;
        go(root, targetSum, 0, v, r);

        return r;
    }
};