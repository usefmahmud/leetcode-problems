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
    TreeNode* lowestCommonAncestor(TreeNode* root, int& p, int& q) {
        if(root == NULL || root->val == p || root->val == q){
            return root;
        }

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if(left != NULL && right != NULL){
            return root;
        }else{
            return left == NULL ? right : left;
        }
    }

    bool go(TreeNode* b, string& s, int& t){
        if(!b) return false;
        if(b->val == t) return true;

        s.push_back('L');
        if(go(b->left, s, t)){
            return true;
        }else{
            s.pop_back();
        }

        s.push_back('R');
        if(go(b->right, s, t)){
            return true;
        }else{
            s.pop_back();
        }

        return false;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* LCA = lowestCommonAncestor(root, startValue, destValue);

        string a = "", b = "";
        go(LCA, a, startValue);
        go(LCA, b, destValue);

        for(auto& x: a){
            x = 'U';
        }

        a += b;
        return a;
    }
};