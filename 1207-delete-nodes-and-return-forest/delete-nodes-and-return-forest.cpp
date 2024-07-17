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
    unordered_map<int,int> m;
    set<TreeNode*> st;
public:
    void distroyConnection(TreeNode* root, int& target){
        if(!root) return;

        if(root->right && root->right->val == target){
            root->right == nullptr;
            return;
        }

        if(root->left && root->left->val == target){
            root->left == nullptr;
            return;
        }

        distroyConnection(root->right, target);
        distroyConnection(root->left, target);
    }
    void go(TreeNode* &b){
        if(!b) return;

        go(b->left), go(b->right);
        if(m[b->val]){
            if(b->right){
                st.insert(b->right);
            }
            if(b->left){
                st.insert(b->left);
            }
            b = nullptr;
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(auto x: to_delete) m[x] = 1;
        go(root);
        if(root) st.insert(root);
        return vector<TreeNode*>(st.begin(), st.end());
    }
};