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
    int maxPathSum(TreeNode* root) {
        // we need to go through DFS for each one
        int answer = root->val;
        dfs(root, answer);
        return answer;
    }

    int dfs(TreeNode* root, int& answer){
        if(!root) return 0;

        // if the node exists, then find the max on the left and the right
        int left = max(dfs(root->left, answer),0);
        int right = max(dfs(root->right, answer),0);

        // add it to this
        answer = max(answer, root->val + left + right);

        return root->val + max(left, right);
    }
};
