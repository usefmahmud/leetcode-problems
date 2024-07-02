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
    int maxLength = 0;
public:
    void go(TreeNode* b, int c, bool isL){
        if(!b) return;
        maxLength = max(maxLength, c);

        if(isL){
            go(b->left, c + 1, 0);
            go(b->right, 1, 1);
        }else{
            go(b->right, c + 1, 1);
            go(b->left, 1, 0);
        }
    }
    int longestZigZag(TreeNode* root) {
        go(root, 0, 1);
        go(root, 0, 0);
        return maxLength;
    }
};