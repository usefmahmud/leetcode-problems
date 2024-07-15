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
    unordered_map<int, pair<int,int>> m;
public:
    void go(TreeNode* b, int val, bool isLeft){
        if(val == 0) return;
        TreeNode* x = new TreeNode(val);
        if(isLeft) b->left = x;
        else b->right = x;

        go(x, m[val].first, true);
        go(x, m[val].second, false);
    }

    int getHead(unordered_set<int>& a, unordered_set<int>& b){
        for(auto x: a){
            if(b.find(x) == b.end()){
                return x;
            }
        }
        return 0;
    }

    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_set<int> a,b;
        for(auto x: descriptions){
            a.insert(x[0]), a.insert(x[1]);
            b.insert(x[1]);
            if(x[2]){
                m[x[0]].first = x[1];
            }else{
                m[x[0]].second = x[1];
            }
        }
        int h = getHead(a,b);

        TreeNode* root = new TreeNode(h);
        go(root, m[h].first, true);
        go(root, m[h].second, false);

        return root;
    }
};