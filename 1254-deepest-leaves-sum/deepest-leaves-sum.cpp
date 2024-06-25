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
    int maxDepth = 0;
public:
    void go(TreeNode* b, int d){
        if(b == NULL){
            maxDepth = max(maxDepth, d);
            return;
        }
        go(b -> right, d+1);
        go(b -> left, d+1);
    }
    void goSum(TreeNode* b, int d, int& sum){
        if(b == NULL) return;
        if(d == maxDepth-1){
            sum += b -> val;
            return;
        }

        goSum(b -> right, d+1, sum);
        goSum(b -> left, d+1, sum);
    }   
    int deepestLeavesSum(TreeNode* root) {
        go(root, 0);
        int sum = 0;
        goSum(root, 0, sum);
        return sum;
    }
};