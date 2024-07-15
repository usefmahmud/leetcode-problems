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

    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> m;
        unordered_set<int> st;
        for (auto& x: descriptions) {
            int parent = x[0], child = x[1], isLeft = x[2];

            if(!m.count(parent)){
                m[parent] = new TreeNode(parent);
            }
            if(!m.count(child)){
                m[child] = new TreeNode(child);
            }

            if (isLeft){
                m[parent]->left = m[child];
            }else{
                m[parent]->right = m[child];
            }

            st.insert(child);
        }
        for(auto& x: m){
            if(!st.count(x.first)){
                return x.second;
            }
        }

        return NULL;
    }
};