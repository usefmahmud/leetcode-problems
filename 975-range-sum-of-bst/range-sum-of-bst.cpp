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
    void go(TreeNode* b, int l, int h, int& sum){
        if(b == NULL) return;
        if(b -> val >= l && b -> val <= h) sum += b -> val;

        if(b -> val < h) go(b -> right, l, h, sum);
        if(b -> val > l) go(b -> left, l, h, sum);
    }
    int rangeSumBST(TreeNode* root, int l, int h) {
        int sum = 0;
        go(root, l, h, sum);

        return sum;
    }
};