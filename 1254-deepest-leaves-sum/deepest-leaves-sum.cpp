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
    int go(TreeNode* b, int d){
        if(b == NULL) return 0;
        return 1 + max(go(b -> right, d+1), go(b -> left, d+1));
    }
    void goSum(TreeNode* b, int d, int maxDepth, int& sum){
        if(b == NULL) return;
        if(d == maxDepth-1){
            sum += b -> val;
            return;
        }
        ++d;
        goSum(b -> right, d, maxDepth, sum);
        goSum(b -> left, d, maxDepth, sum);
    }   
    int deepestLeavesSum(TreeNode* root) {
        int maxDepth = go(root, 0);
        int sum = 0;
        goSum(root, 0, maxDepth, sum);
        return sum;
    }
};