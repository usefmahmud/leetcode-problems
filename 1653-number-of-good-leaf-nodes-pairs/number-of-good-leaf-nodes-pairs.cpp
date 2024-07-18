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
    vector<int> go(TreeNode* b, int& dis, int& r){
        if(!b) return {};
        if(!b->right && !b->left) return {1};

        vector<int> left = go(b->left, dis, r);
        vector<int> right = go(b->right, dis, r);
        vector<int> tmp;

        for(auto x: right){
            for(auto y: left){
                if(x + y <= dis){
                    r++;
                }
            }
        }

        for(auto x: right){
            if(x < dis){
                tmp.push_back(x + 1);
            }
        }

        for(auto y: left){
            if(y < dis){
                tmp.push_back(y + 1);
            }
        }


        return tmp;
    }
    int countPairs(TreeNode* root, int distance) {
        int r = 0;
        go(root, distance, r);

        return r;
    }
};