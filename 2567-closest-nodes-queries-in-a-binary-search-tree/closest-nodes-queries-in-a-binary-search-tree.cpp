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
    vector<int> t;
public:
    void go(TreeNode* b){
        if(!b) return;
        go(b->left);
        t.push_back(b->val);
        go(b->right);
    }
    void up(int& a, int x){
        int l = 0, r = t.size() - 1, m;
        while(l <= r){
            m = (l + r) / 2;
            if(t[m] > x){
                r = m - 1;
            }else{
                a = t[m];
                l = m + 1;
            }
        }
    }
    void low(int& b, int x){
        int l = 0, r = t.size() - 1, m;
        while(l <= r){
            m = (l + r) / 2;
            if(t[m] < x){
                l = m + 1;
            }else{
                b = t[m];
                r = m - 1;
            }
        }
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<vector<int>> res;
        go(root);
        for(auto x: queries){
            int a = -1, b = -1;
            up(a, x), low(b, x);
            res.push_back({a, b});
        }
        return res;
    }
};