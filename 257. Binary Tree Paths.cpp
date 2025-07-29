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
    vector<string> root_to_leaf_path;
    void inorder(TreeNode* node, string path){
        if (!node) return;
        
        if (!path.empty()){
            path += "->";
        }
        path += to_string(node->val);
        
        if (!node->left && !node->right){
            root_to_leaf_path.push_back(path);
        }
        inorder(node->left, path);
        inorder(node->right, path);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if (!root) return {};
        inorder(root, "");
        return root_to_leaf_path;  
    }
};
