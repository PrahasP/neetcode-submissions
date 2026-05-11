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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int trueHeight = 0;
        scanTree(root, trueHeight);
        return trueHeight;
    }

    int scanTree(TreeNode* node, int& height){
        if(!node) {
            return 0;
        }

        int LHeight = scanTree(node->left, height);
        int RHeight = scanTree(node->right, height);

        height = max(height, LHeight + RHeight);

        return 1 + max(LHeight, RHeight);
    }
};
