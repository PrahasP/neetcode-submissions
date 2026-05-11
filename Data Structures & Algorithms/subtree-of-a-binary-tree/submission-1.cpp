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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!subRoot) return true;
        if (!root) return false;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            if(node->val == subRoot->val && isSame(node, subRoot)){
                return true;
            }

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }

        return false;
    }

    bool isSame(TreeNode* a, TreeNode* b){
        if (!a && !b) return true;
        if (!a || !b) return false;
        if (a->val != b->val) return false;
        return isSame(a->left, b->left) && isSame(a->right, b->right);
    }
};
