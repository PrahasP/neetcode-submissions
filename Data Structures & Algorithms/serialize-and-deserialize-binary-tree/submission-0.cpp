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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string answer;
        dfs(root, answer);
        return answer;
    }

    void dfs(TreeNode* root, string& answer){
        if(!root) {
            answer += "@|"; // Null Token
            return;
        }

        answer += to_string(root->val) + "|";
        dfs(root->left, answer);
        dfs(root->right, answer);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> dataHolder;

        string tempHolder;
        for(int i = 0; i < data.size(); i++){
            if (data[i] == '|'){
                dataHolder.push_back(tempHolder);
                tempHolder = "";
                continue;
            }
            tempHolder += data[i];
        }
        int i = 0;
        return build(dataHolder, i);
    }

    TreeNode* build(vector<string>& t, int& i){
        string token = t[i++];

        if(token == "@"){
            return nullptr;
        } else {
            TreeNode* node = new TreeNode(stoi(token));
            node->left = build(t, i);
            node->right = build(t, i);
            return node;
        }
    }
};
