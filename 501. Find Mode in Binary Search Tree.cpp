/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    vector<int> mode;
    int currentVal = INT_MIN;
    int currentCount = 0;
    int maxCount = 0;

public:
    void inorder(TreeNode* root) {
        if (!root)
            return;

        inorder(root->left);

        if (currentCount == 0 || root->val != currentVal) {
            currentVal = root->val;
            currentCount = 1;
        } else {
            currentCount++;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mode.clear();
            mode.push_back(currentVal);
        } else if (currentCount == maxCount) {
            mode.push_back(currentVal);
        }

        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        mode.clear();
        currentCount = 0;
        maxCount = 0;

        inorder(root);
        return mode;
    }
};
