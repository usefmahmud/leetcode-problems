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
    TreeNode* get(int l, int r, vector<int>& nums){
        if(l > r) return NULL;

        int m = (l + r) / 2;
        TreeNode* b = new TreeNode(nums[m]);
        b->left = get(l, m-1, nums); 
        b->right = get(m+1, r, nums); 

        return b;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums){
        return get(0, nums.size()-1, nums);
    }
};