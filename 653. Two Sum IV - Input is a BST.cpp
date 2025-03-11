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
    bool preorder(TreeNode* root, int k, unordered_map<int, bool>& my_map){
        if (root == nullptr) return false;
        if ( my_map[k - (root->val)] ) return true;
        my_map[root->val] = true;
        if (preorder(root->left, k, my_map) || preorder(root->right, k, my_map)) 
            return true;
        // preorder(root->left, k, my_map);
        // preorder(root->right, k, my_map);
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int, bool> my_map;
        return preorder(root, k, my_map);
    }
};
